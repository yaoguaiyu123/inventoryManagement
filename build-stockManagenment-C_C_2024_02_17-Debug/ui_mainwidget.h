/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QTableWidget *tableWidget;
    QPushButton *newbutton;
    QPushButton *deletebutton;
    QPushButton *addbutton;
    QPushButton *decreasebutton;
    QPushButton *exportbutton;
    QPushButton *sumbutton;
    QPushButton *lookupbutton;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName("MainWidget");
        MainWidget->resize(1221, 670);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/system.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWidget->setWindowIcon(icon);
        tableWidget = new QTableWidget(MainWidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 100, 1201, 561));
        newbutton = new QPushButton(MainWidget);
        newbutton->setObjectName("newbutton");
        newbutton->setGeometry(QRect(10, 60, 83, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\226\271\346\255\243\351\273\221\344\275\223_GBK")});
        newbutton->setFont(font);
        newbutton->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background:rgb(78, 185, 87);\n"
"border-radius:10px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/tianjia.png"), QSize(), QIcon::Normal, QIcon::Off);
        newbutton->setIcon(icon1);
        deletebutton = new QPushButton(MainWidget);
        deletebutton->setObjectName("deletebutton");
        deletebutton->setGeometry(QRect(110, 60, 83, 30));
        deletebutton->setFont(font);
        deletebutton->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background:rgb(78, 185, 87);\n"
"border-radius:10px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/shanchu.png"), QSize(), QIcon::Normal, QIcon::Off);
        deletebutton->setIcon(icon2);
        addbutton = new QPushButton(MainWidget);
        addbutton->setObjectName("addbutton");
        addbutton->setGeometry(QRect(210, 60, 83, 30));
        addbutton->setFont(font);
        addbutton->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background:rgb(78, 185, 87);\n"
"border-radius:10px;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/ruku.png"), QSize(), QIcon::Normal, QIcon::Off);
        addbutton->setIcon(icon3);
        decreasebutton = new QPushButton(MainWidget);
        decreasebutton->setObjectName("decreasebutton");
        decreasebutton->setGeometry(QRect(310, 60, 83, 30));
        decreasebutton->setFont(font);
        decreasebutton->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background:rgb(78, 185, 87);\n"
"border-radius:10px;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/chuku.png"), QSize(), QIcon::Normal, QIcon::Off);
        decreasebutton->setIcon(icon4);
        exportbutton = new QPushButton(MainWidget);
        exportbutton->setObjectName("exportbutton");
        exportbutton->setGeometry(QRect(410, 60, 83, 30));
        exportbutton->setFont(font);
        exportbutton->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background:rgb(78, 185, 87);\n"
"border-radius:10px;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/daochu.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportbutton->setIcon(icon5);
        sumbutton = new QPushButton(MainWidget);
        sumbutton->setObjectName("sumbutton");
        sumbutton->setGeometry(QRect(513, 60, 83, 30));
        sumbutton->setFont(font);
        sumbutton->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background:rgb(78, 185, 87);\n"
"border-radius:10px;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/huizong.png"), QSize(), QIcon::Normal, QIcon::Off);
        sumbutton->setIcon(icon6);
        lookupbutton = new QPushButton(MainWidget);
        lookupbutton->setObjectName("lookupbutton");
        lookupbutton->setGeometry(QRect(1100, 10, 91, 30));
        lookupbutton->setStyleSheet(QString::fromUtf8("background:rgb(100, 200, 200);\n"
"color:white;\n"
"border-radius:10px;"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/sousuo.png"), QSize(), QIcon::Normal, QIcon::Off);
        lookupbutton->setIcon(icon7);
        lineEdit = new QLineEdit(MainWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(890, 10, 191, 30));
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"color:rgb(0,0,0);\n"
"background:rgb(255, 255, 255);\n"
""));
        label = new QLabel(MainWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(780, 10, 101, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\226\271\346\255\243\344\271\246\345\256\213_GBK")});
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "\345\272\223\345\255\230\347\256\241\347\220\206\347\263\273\347\273\2371.0.0", nullptr));
        newbutton->setText(QCoreApplication::translate("MainWidget", "\346\226\260\345\242\236\345\225\206\345\223\201", nullptr));
        deletebutton->setText(QCoreApplication::translate("MainWidget", "\345\210\240\351\231\244\345\225\206\345\223\201", nullptr));
        addbutton->setText(QCoreApplication::translate("MainWidget", "\345\225\206\345\223\201\345\205\245\345\272\223", nullptr));
        decreasebutton->setText(QCoreApplication::translate("MainWidget", "\345\225\206\345\223\201\345\207\272\345\272\223", nullptr));
        exportbutton->setText(QCoreApplication::translate("MainWidget", "\345\257\274\345\207\272\346\225\260\346\215\256", nullptr));
        sumbutton->setText(QCoreApplication::translate("MainWidget", "\346\225\260\346\215\256\346\261\207\346\200\273", nullptr));
        lookupbutton->setText(QCoreApplication::translate("MainWidget", "\346\225\260\346\215\256\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("MainWidget", "\350\216\267\345\217\226\345\225\206\345\223\201\347\274\226\345\217\267:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
