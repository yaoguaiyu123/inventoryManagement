#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    connectDatabase();
    QPalette palette;
    palette.setColor(QPalette::Window,QColor(195,215,240));
    setPalette(palette);
    tableWidgetListData(); //初始化表格
}

MainWidget::~MainWidget()
{
    delete ui;
}

// 连接数据库
void MainWidget::connectDatabase()
{
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("inventory.db");
    if (!database.open()) {
        QMessageBox::information(nullptr, "连接数据库", "数据库连接失败，ERROR", QMessageBox::Ok);
    }
}

// 初始化表格控件
void MainWidget::tableWidgetListData()
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
                                                             << "入库时间"
                                                             << "出库时间"
                                                             << "备注");
    ui->tableWidget->setFont(QFont("宋体", 11)); // 设置字体
    ui->tableWidget->setColumnWidth(0, 80);
    ui->tableWidget->setColumnWidth(2, 80);
    ui->tableWidget->setColumnWidth(6, 150);
    ui->tableWidget->setColumnWidth(7, 150);
    ui->tableWidget->setColumnWidth(8, 120);
}

void MainWidget::on_newbutton_clicked()
{

}


void MainWidget::on_deletebutton_clicked()
{

}


void MainWidget::on_addbutton_clicked()
{

}


void MainWidget::on_decreasebutton_clicked()
{

}


void MainWidget::on_exportbutton_clicked()
{

}


void MainWidget::on_sumbutton_clicked()
{

}

void MainWidget::on_lookupbutton_clicked()
{

}

