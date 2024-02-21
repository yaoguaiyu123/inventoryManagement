#ifndef DATASUM_H
#define DATASUM_H

#include <QWidget>
#include <QTableWidget>
#include <QStringList>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QDir>
#include <QTextStream>

namespace Ui {
class DataSum;
}

class DataSum : public QWidget
{
    Q_OBJECT

public:
    explicit DataSum(QWidget* parent = nullptr);
    ~DataSum();
    void tableWidgetInit(); // 初始化表格控件
    static void searchDir(QStringList& list, QString name, int& level);
private slots:
    void on_pushButton_4_clicked();

private:
    Ui::DataSum *ui;
};

#endif // DATASUM_H
