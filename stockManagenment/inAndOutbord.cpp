#include "inAndOutbord.h"
#include "ui_inAndOutbord.h"

InAndOutbord::InAndOutbord(QWidget *parent,int mode) :
    QWidget(parent),
    ui(new Ui::InAndOutbord)
{
    ui->setupUi(this);
    m_mode = mode;
    // 禁止窗口最大化
    setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);
    // 禁止窗口大小变化
    setFixedSize(width(), height());
    changeDisplay();
    //初始化combobox控件
    initCombobox();
}

InAndOutbord::~InAndOutbord()
{
    delete ui;
}
void InAndOutbord::initCombobox()
{
    int i = 0;
    QSqlQuery query;
    query.exec("select * from stock");
    while (query.next()) {
        qDebug() << query.value(0).toString();
        ui->comboBox->insertItem(i++, query.value(0).toString());
    }
}

//出库/入库按钮（之后添加更新时间的功能）
void InAndOutbord::on_addButton_clicked()
{
    if (ui->lineEdit->text().isEmpty()) {
        QMessageBox::critical(this, "错误", "商品数量不能为空");
        return;
    }
    bool flag;
    int addAmount = ui->lineEdit->text().toInt(&flag);
    if (!flag || addAmount <= 0) {
        QMessageBox::critical(this, "错误", "商品数量输入有误");
        return;
    }
    QSqlQuery query;
    query.exec(tr("select amount from stock where id = %1").arg(ui->comboBox->currentText()));
    int nowAmount;
    while (query.next()) {
        nowAmount = query.value(0).toInt();
    }
    int amount;
    if (m_mode == 0) { // 当前是入库模式
        amount = nowAmount + addAmount;
    }else{              //当前是出库模式
        if(nowAmount<=addAmount){
            QMessageBox::critical(this, "错误", "当前库存商品不足");
            return;
        }
        amount = nowAmount - addAmount;
    }
    bool isSuccess = query.exec(tr("update stock set amount = %1 where id = %2").arg(amount).arg(ui->comboBox->currentText()));
    if (isSuccess) {
        QMessageBox::information(this, "提示", "商品入库成功", QMessageBox::Ok);
        emit(oneOperationEnd());
    } else {
        QMessageBox::information(this, "提示", "商品入库失败...", QMessageBox::Ok);
    }

}


void InAndOutbord::on_closeButton_clicked()
{
    close();
}


void InAndOutbord::on_transButton_clicked()
{
    changeDisplay();
    m_mode = 1 - m_mode;
}

void InAndOutbord::changeDisplay()
{
    if (m_mode == 0) {
        setWindowTitle("商品入库");
        ui->addButton->setText("商品入库");
        ui->transButton->setText("我要出库");
        QPalette palette;
        palette.setColor(QPalette::Window, QColor(210, 220, 240));
        setPalette(palette);
    } else {
        setWindowTitle("商品出库");
        ui->addButton->setText("商品出库");
        ui->transButton->setText("我要入库");
        QPalette palette;
        palette.setColor(QPalette::Window, QColor(230, 240, 230));
        setPalette(palette);
    }
}

void InAndOutbord::on_pushButton_clicked()
{
    // 空实现，修改ui,moc.cpp,ui.h的依赖关系的时候产生的链接错误
    qDebug() << "log::clicked";
}
