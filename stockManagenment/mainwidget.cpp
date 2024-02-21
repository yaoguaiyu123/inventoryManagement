#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "addstock.h"
#include "inAndOutbord.h"
#include "datasum.h"


MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    //禁止窗口最大化
    setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);
    //禁止窗口大小变化
    setFixedSize(width(),height());
    connectDatabase();
    QPalette palette;
    palette.setColor(QPalette::Window,QColor(195,215,240));
    setPalette(palette);
    tableWidgetInit(); //初始化表格
}

MainWidget::~MainWidget()
{
    delete ui;
}

// 连接数据库
void MainWidget::connectDatabase()
{
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("../stockManagenment/inventory.db");
    if (!database.open()) {
        QMessageBox::information(nullptr, "连接数据库", "数据库连接失败，ERROR", QMessageBox::Ok);
    }
}

// 初始化表格控件
void MainWidget::tableWidgetInit()
{
    // 编号 名称 数量 单价 供应商 负责人 入库时间 出库时间 备注
    // 指定表格200行9列
    ui->tableWidget->setColumnCount(9);
    ui->tableWidget->setRowCount(200);
    // 初始化表格字段
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "编号"
                                                             << "名称"
                                                             << "数量"
                                                             << "单价"
                                                             << "供应商"
                                                             << "负责人"
                                                             << "入库时间(上一次)"
                                                             << "出库时间(上一次)"
                                                             << "备注");
    ui->tableWidget->setFont(QFont("宋体", 11)); // 设置字体
    ui->tableWidget->setColumnWidth(0, 80);
    ui->tableWidget->setColumnWidth(2, 80);
    ui->tableWidget->setColumnWidth(4, 150);
    ui->tableWidget->setColumnWidth(6, 150);
    ui->tableWidget->setColumnWidth(7, 150);
    ui->tableWidget->setColumnWidth(8, 120);

    tableWidgetInitData();
}

//初始化(刷新)表格数据
void MainWidget::tableWidgetInitData(){
    QSqlQuery query;
    QString str = QString("select * from stock");
    query.exec(str);
    int i = 0;
    while (query.next()) {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(query.value(1).toString()));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(query.value(2).toString()));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(query.value(3).toString()));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(query.value(4).toString()));
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(query.value(5).toString()));
        ui->tableWidget->setItem(i, 6, new QTableWidgetItem(query.value(6).toString()));
        ui->tableWidget->setItem(i, 7, new QTableWidgetItem(query.value(7).toString()));
        ui->tableWidget->setItem(i, 8, new QTableWidgetItem(query.value(8).toString()));
        i++;
    }
}

//添加商品
void MainWidget::on_newbutton_clicked()
{
    Addstock* addStockWidget = new Addstock();
    addStockWidget->show();
    connect(addStockWidget, SIGNAL(oneOperationEnd()), this, SLOT(newStockEnd()));
}

//删除商品
void MainWidget::on_deletebutton_clicked()
{
    // 首先获取当前表格中不为空行的行数
    int i = 0;
    for (i = 0; i < ui->tableWidget->rowCount(); ++i) {
        if (ui->tableWidget->item(i, 0) ==nullptr) {
            break;
        }
    }

    int norow = ui->tableWidget->currentRow();
    qDebug() << i;
    if (norow < 0 || norow >= i) {
        QMessageBox::information(this, "提示", "请先选择要删除的商品");
        return;
    }
    ui->tableWidget->selectRow(norow);
    QString id = ui->tableWidget->item(norow, 0)->text();
    QString name = ui->tableWidget->item(norow, 1)->text();
    int res = QMessageBox::warning(this, "确认删除", tr("是否删除编号为 %1 的商品 %2").arg(id).arg(name), QMessageBox::Yes, QMessageBox::No);
    if (res == QMessageBox::Yes) {
        QSqlQuery query;
        query.exec(tr("delete from stock where id = %1").arg(id));
        ui->tableWidget->clear();
        //重新加载表格
        tableWidgetInitData();
    }
}

//商品入库按钮
void MainWidget::on_addbutton_clicked()
{
    InAndOutbord* inAndoutbord = new InAndOutbord();
    inAndoutbord->show();
    connect(inAndoutbord, SIGNAL(oneOperationEnd()), this, SLOT(addStockEnd()));
}

//商品出库按钮
void MainWidget::on_decreasebutton_clicked()
{
    InAndOutbord* inAndoutbord = new InAndOutbord(nullptr, 1);
    inAndoutbord->show();
    connect(inAndoutbord, SIGNAL(oneOperationEnd()), this, SLOT(addStockEnd()));
}

//导出数据
void MainWidget::on_exportbutton_clicked()
{
    QDir dir(".");
    QStringList files = dir.entryList(QDir::Files);
    QString name("result"), allName;
    int level = 0;
    DataSum::searchDir(files, name, level);
    //    qDebug() << level;
    if (level == 0) {
        allName = tr("%1.csv").arg(name);
    } else {
        allName = tr("%1(%2).csv").arg(name).arg(level);
    }
    QFile file(allName);
    if (file.open(QIODevice::ReadWrite | QIODevice::Truncate)) {
        QTextStream stream(&file);
        // 写入表格中的数据到csv文件
        int i;
        int columnCount = ui->tableWidget->columnCount();
        //        qDebug() << columnCount;
        for (i = 0; i < columnCount - 1; i++) {
            stream << ui->tableWidget->horizontalHeaderItem(i)->text() << ",";
        }
        stream << ui->tableWidget->horizontalHeaderItem(i)->text() << "\n";
        bool flag = false;
        for (i = 0; i < ui->tableWidget->rowCount(); ++i) {
            for (int j = 0; j < columnCount; ++j) {
                QTableWidgetItem* item = ui->tableWidget->item(i, j);
                if (item == nullptr) {
                    flag = true;
                    break;
                }
                stream << item->text();
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

//数据汇总
void MainWidget::on_sumbutton_clicked()
{
    DataSum* dataSum = new DataSum();
    dataSum->show();
}

void MainWidget::on_lookupbutton_clicked()
{
    if (ui->lineEdit->text().isEmpty()) {
        tableWidgetInitData();
        return;
    }
    //清除表格控件的数据
    ui->tableWidget->clear();
    // 执行查询逻辑
    QSqlQuery query;
    QString idStr = "id = ";
    idStr = idStr + ui->lineEdit->text();
    QString str = QString("select * from stock where %1").arg(idStr);
    query.exec(str);
    int i = 0;
//    qDebug() << "前:"<< ui->tableWidget->item(1, 0)->text();
    while (query.next()) {
        // 取出数据并添加到表格
//                qDebug() << query.value(0).toString() << query.value(1).toString();
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(query.value(1).toString()));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(query.value(2).toString()));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(query.value(3).toString()));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(query.value(4).toString()));
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(query.value(5).toString()));
        ui->tableWidget->setItem(i, 6, new QTableWidgetItem(query.value(6).toString()));
        ui->tableWidget->setItem(i, 7, new QTableWidgetItem(query.value(7).toString()));
        ui->tableWidget->setItem(i, 8, new QTableWidgetItem(query.value(8).toString()));
        i++;
    }
//    qDebug()  << "后:"<< ui->tableWidget->item(1, 0)->text();

}

void MainWidget::newStockEnd(){
    tableWidgetInit();  //这边都是刷新整个组件，后面可以考虑实现局部刷新
}


void MainWidget::addStockEnd(){
    tableWidgetInit();
}



