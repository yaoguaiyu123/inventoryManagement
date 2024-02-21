#include "datasum.h"
#include "ui_datasum.h"

// 找寻未存在的文件名
//这个实际上一个工具类中的方法，但是这里先写成DataSum的成员方法
void DataSum::searchDir(QStringList& list, QString name, int& level)
{
    for (auto e : list) {
        // 去掉文件名的后缀
        int index = e.lastIndexOf('.');
        e.remove(index, e.length() - index);
        if (level == 0 && e == name) {
            searchDir(list, name, ++level);
        }
        if (QObject::tr("%1(%2)").arg(name).arg(level) == e) {
            searchDir(list, name, ++level);
        }
    }
}

DataSum::DataSum(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataSum)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);
    setFixedSize(width(), height());
    QPalette palette;
    palette.setColor(QPalette::Window,QColor(120,125,165));
    setPalette(palette);
    setWindowTitle("数据汇总表格");
    //初始化表格控件
    tableWidgetInit();
}

DataSum::~DataSum()
{
    delete ui;
}

// 初始化表格控件和数据
void DataSum::tableWidgetInit()
{
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setRowCount(200);
    ui->tableWidget->setFont(QFont("宋体", 11));
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "编号"
                                                             << "名称"
                                                             << "数量"
                                                             << "单价"
                                                             << "总价");
    for (int i = 0; i < 5; ++i) {
        ui->tableWidget->setColumnWidth(i, 160);
    }
    QSqlQuery query;
    QString str = QString("select * from stock");
    query.exec(str);
    int i = 0;
    int sSumprice = 0, sSumcount = 0;
    while (query.next()) {
        QString sumPrice = QString::number(query.value(2).toInt() * query.value(3).toDouble());
        sSumcount += query.value(2).toInt();
        sSumprice += sumPrice.toDouble();
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(query.value(1).toString()));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(query.value(2).toString()));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(query.value(3).toString()));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(sumPrice));
        i++;
    }
    ui->tableWidget->setItem(i, 0, new QTableWidgetItem("汇总:"));
    ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(sSumcount)));
    ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(sSumprice)));
}

// 导出数据
void DataSum::on_pushButton_4_clicked()
{
    QDir dir(".");
    QStringList files = dir.entryList(QDir::Files);
    QString name("summarize"), allName;
    int level = 0;
    searchDir(files, name, level);
    if (level == 0) {
        allName = tr("%1.csv").arg(name);
    } else {
        allName = tr("%1(%2).csv").arg(name).arg(level);
    }
    QFile file(allName);
    if (file.open(QIODevice::ReadWrite | QIODevice::Truncate)) {
        QTextStream stream(&file);
        int i;
        int columnCount = ui->tableWidget->columnCount();
        for (i = 0; i < columnCount - 1; i++) {
            stream << ui->tableWidget->horizontalHeaderItem(i)->text() << ",";
        }
        stream << ui->tableWidget->horizontalHeaderItem(i)->text() << "\n";
        bool flag = false;
        for (i = 0; i < ui->tableWidget->rowCount(); ++i) {
            for (int j = 0; j < columnCount; ++j) {
                QTableWidgetItem* item = ui->tableWidget->item(i, j);
                if (item == nullptr && j == 0) {
                    flag = true;
                    break;
                }
                if (item != nullptr) {
                    stream << item->text();
                } else {
                    stream << "  ";
                }
                if (j < columnCount - 1) {
                    stream << ",";
                }
            }
            if (flag) {
                break;
            }
            stream << "\n";
        }
    }
    QMessageBox::information(this, "提示", tr("您的数据已保存到文件%1").arg(allName));
}

