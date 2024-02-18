#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "addstock.h"
#include "inAndOutbord.h"

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
    database.setDatabaseName("inventory.db");
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
        ui->tableWidget->setItem(i, 9, new QTableWidgetItem(query.value(9).toString()));
        i++;
    }
}

void MainWidget::on_newbutton_clicked()
{
    Addstock* addStockWidget = new Addstock();
    addStockWidget->show();
    connect(addStockWidget, SIGNAL(oneOperationEnd()), this, SLOT(newStockEnd()));
}


void MainWidget::on_deletebutton_clicked()
{

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


void MainWidget::on_exportbutton_clicked()
{

}


void MainWidget::on_sumbutton_clicked()
{

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



