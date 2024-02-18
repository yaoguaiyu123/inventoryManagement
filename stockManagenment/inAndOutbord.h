#ifndef INANDOUTBORD_H
#define INANDOUTBORD_H
//商品入库出库的界面类
//商品入库出库时间是否需要单独设计一张表来存储(后期改进)
#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QDateTime>

namespace Ui {
class InAndOutbord;
}

class InAndOutbord : public QWidget
{
    Q_OBJECT

public:
    explicit InAndOutbord(QWidget* parent = nullptr,int mode = 0);
    ~InAndOutbord();
    void initCombobox();
    void changeDisplay();
private slots:
    void on_addButton_clicked();
    void on_closeButton_clicked();

    void on_pushButton_clicked();

    void on_transButton_clicked();

signals:
    int oneOperationEnd();

private:
    Ui::InAndOutbord *ui;
    int m_mode;
};

#endif // INANDOUTBORD_H
