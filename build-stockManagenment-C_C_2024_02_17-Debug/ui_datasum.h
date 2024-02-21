/********************************************************************************
** Form generated from reading UI file 'datasum.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASUM_H
#define UI_DATASUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataSum
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton_4;

    void setupUi(QWidget *DataSum)
    {
        if (DataSum->objectName().isEmpty())
            DataSum->setObjectName("DataSum");
        DataSum->resize(984, 494);
        tableWidget = new QTableWidget(DataSum);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 70, 961, 411));
        pushButton_4 = new QPushButton(DataSum);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(860, 30, 90, 30));
        pushButton_4->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background:rgb(78, 185, 87);\n"
"border-radius:10px;"));

        retranslateUi(DataSum);

        QMetaObject::connectSlotsByName(DataSum);
    } // setupUi

    void retranslateUi(QWidget *DataSum)
    {
        DataSum->setWindowTitle(QCoreApplication::translate("DataSum", "Form", nullptr));
        pushButton_4->setText(QCoreApplication::translate("DataSum", "\345\257\274\345\207\272\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataSum: public Ui_DataSum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASUM_H
