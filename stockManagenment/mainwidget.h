#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QDesktopServices>

QT_BEGIN_NAMESPACE
    namespace Ui { class MainWidget; }
QT_END_NAMESPACE

    class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget* parent = nullptr);
    ~MainWidget();
    void connectDatabase();  //连接数据库
    void tableWidgetInit(); // 初始化表格控件
    void tableWidgetInitData(); // 初始化表格数据
private slots:
    void on_newbutton_clicked();
    void on_deletebutton_clicked();
    void on_addbutton_clicked();
    void on_decreasebutton_clicked();
    void on_exportbutton_clicked();
    void on_sumbutton_clicked();
    void on_lookupbutton_clicked();
    void newStockEnd();
    void addStockEnd();
private:
    Ui::MainWidget *ui;
};
#endif // MAINWIDGET_H
