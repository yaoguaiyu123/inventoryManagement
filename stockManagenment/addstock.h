#ifndef ADDSTOCK_H
#define ADDSTOCK_H
//这个类是添加商品的窗口类
#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDateTime>

namespace Ui {
class Addstock;
}

class Addstock : public QWidget
{
    Q_OBJECT

public:
    explicit Addstock(QWidget* parent = nullptr);
    ~Addstock();
    void resetAllEdits();
private slots:
    void on_addButton_clicked();
    void on_exitButton_clicked();

    void on_resetButon_clicked();
signals:
    int oneOperationEnd();
private:

    Ui::Addstock *ui;
};

#endif // ADDSTOCK_H
