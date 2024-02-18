#include "addstock.h"
#include "ui_addstock.h"
#include <QMessageBox>
#include <QRandomGenerator>

Addstock::Addstock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Addstock)
{
    ui->setupUi(this);
    //禁止窗口最大化
    setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);
    //禁止窗口大小变化
    setFixedSize(width(),height());
    ui->lineEdit_1->setFocus();
}

Addstock::~Addstock()
{
    delete ui;
}

void Addstock::on_addButton_clicked()
{
    if (ui->lineEdit_1->text().isEmpty()) {
        QMessageBox::critical(this, "错误", "商品编号不能为空!");
        return;
    }
    if (ui->lineEdit_2->text().isEmpty()) {
        QMessageBox::critical(this, "错误", "商品名称不能为空!");
        return;
    }
    if (ui->lineEdit_3->text().isEmpty()) {
        QMessageBox::critical(this, "错误", "商品数量不能为空!");
        return;
    }
    bool flag;
    double temp = ui->lineEdit_3->text().toInt(&flag);
    if (!flag) {
        QMessageBox::critical(this, "错误", "商品数量输入有误!");
        return;
    }
    qDebug() << "log:" << temp;
    if (ui->lineEdit_4->text().isEmpty()) {
        QMessageBox::critical(this, "错误", "商品单价不能为空!");
        return;
    }
    temp = ui->lineEdit_4->text().toDouble(&flag);
    if (!flag) {
        QMessageBox::critical(this, "错误", "商品单价数量输入有误!");
        return;
    }
    qDebug() << "log:" << temp;
    if (ui->lineEdit_5->text().isEmpty()) {
        QMessageBox::critical(this, "错误", "商品供应商不能为空!");
        return;
    }
    if (ui->lineEdit_6->text().isEmpty()) {
        QMessageBox::critical(this, "错误", "商品负责人不能为空!");
        return;
    }
    QSqlQuery query;
    QString inbordTime, outbordTime;
    //    qDebug() << ui->lineEdit_1->text()<< ui->lineEdit_2->text()<< ui->lineEdit_3->text()
    //             << ui->lineEdit_4->text()<< ui->lineEdit_5->text()<< ui->lineEdit_6->text()<<ui->textEdit->toPlainText();
    inbordTime = QDateTime::currentDateTime().toString("yyyy/MM/dd HH:mm:ss");
    qint64 randomOffset = QRandomGenerator::global()->bounded(3600 * 12, 3600 * 24 * 7);
    outbordTime = QDateTime::currentDateTime().addSecs(randomOffset).toString("yyyy/MM/dd HH:mm:ss");
    //    qDebug() << inbordTime << "   " << outbordTime;
    bool isSuccess = query.exec(tr("insert into stock values(%1,'%2',%3,'%4','%5','%6','%7','%8','%9')")
                                    .arg(ui->lineEdit_1->text())
                                    .arg(ui->lineEdit_2->text())
                                    .arg(ui->lineEdit_3->text())
                                    .arg(ui->lineEdit_4->text())
                                    .arg(ui->lineEdit_5->text())
                                    .arg(ui->lineEdit_6->text())
                                    .arg(inbordTime)
                                    .arg(outbordTime)
                                    .arg(ui->textEdit->toPlainText()));
    qDebug() << tr("insert into stock values(%1,%2,%3,%4,%5,%6,%7,%8,%9)")
                    .arg(ui->lineEdit_1->text())
                    .arg(ui->lineEdit_2->text())
                    .arg(ui->lineEdit_3->text())
                    .arg(ui->lineEdit_4->text())
                    .arg(ui->lineEdit_5->text())
                    .arg(ui->lineEdit_6->text())
                    .arg(inbordTime)
                    .arg(outbordTime)
                    .arg(ui->textEdit->toPlainText());
    if (isSuccess) {
        QMessageBox::information(this, "消息", "添加成功!", QMessageBox::Ok);
        emit(oneOperationEnd());
        resetAllEdits();
    }else{
        QMessageBox::information(this, "消息", "添加失败....", QMessageBox::Ok);
    }

}

//重置所有输入框
void Addstock::resetAllEdits(){
    ui->lineEdit_1->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->textEdit->clear();
}

void Addstock::on_exitButton_clicked()
{
    close();
}


void Addstock::on_resetButon_clicked()
{
    resetAllEdits();
}

