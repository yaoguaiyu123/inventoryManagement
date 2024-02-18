/********************************************************************************
** Form generated from reading UI file 'addstock.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTOCK_H
#define UI_ADDSTOCK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Addstock
{
public:
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QTextEdit *textEdit;
    QLabel *label_7;
    QPushButton *addButton;
    QPushButton *exitButton;
    QPushButton *resetButon;

    void setupUi(QWidget *Addstock)
    {
        if (Addstock->objectName().isEmpty())
            Addstock->setObjectName("Addstock");
        Addstock->resize(805, 409);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/tianjia.png"), QSize(), QIcon::Normal, QIcon::Off);
        Addstock->setWindowIcon(icon);
        label_1 = new QLabel(Addstock);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(100, 30, 70, 24));
        label_1->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"background:rgb(193, 240, 139);\n"
"border-radius:10px;"));
        label_2 = new QLabel(Addstock);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 90, 70, 25));
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"background:rgb(193, 240, 139);\n"
"border-radius:10px;"));
        label_3 = new QLabel(Addstock);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 150, 70, 24));
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"background:rgb(193, 240, 139);\n"
"border-radius:10px;"));
        label_4 = new QLabel(Addstock);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(100, 210, 70, 25));
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"background:rgb(193, 240, 139);\n"
"border-radius:10px;"));
        label_5 = new QLabel(Addstock);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(100, 270, 70, 24));
        label_5->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"background:rgb(193, 240, 139);\n"
"border-radius:10px;"));
        label_6 = new QLabel(Addstock);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(100, 330, 70, 24));
        label_6->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"background:rgb(193, 240, 139);\n"
"border-radius:10px;"));
        lineEdit_1 = new QLineEdit(Addstock);
        lineEdit_1->setObjectName("lineEdit_1");
        lineEdit_1->setGeometry(QRect(180, 30, 160, 23));
        lineEdit_1->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background:white;"));
        lineEdit_2 = new QLineEdit(Addstock);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(180, 90, 160, 23));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background:white;"));
        lineEdit_4 = new QLineEdit(Addstock);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(180, 210, 160, 23));
        lineEdit_4->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background:white;"));
        lineEdit_3 = new QLineEdit(Addstock);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(180, 150, 160, 23));
        lineEdit_3->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background:white;"));
        lineEdit_5 = new QLineEdit(Addstock);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(180, 270, 160, 23));
        lineEdit_5->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background:white;"));
        lineEdit_6 = new QLineEdit(Addstock);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(180, 330, 160, 23));
        lineEdit_6->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background:white;"));
        textEdit = new QTextEdit(Addstock);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(490, 60, 231, 231));
        label_7 = new QLabel(Addstock);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(490, 30, 80, 24));
        label_7->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"background:rgb(193, 240, 139);\n"
"border-radius:10px;"));
        addButton = new QPushButton(Addstock);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(670, 370, 100, 30));
        addButton->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:rgb(85, 170, 0);\n"
"border-radius:10px;"));
        exitButton = new QPushButton(Addstock);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(770, 0, 31, 30));
        exitButton->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:rgb(255, 160, 160);\n"
"border-radius:10px;"));
        resetButon = new QPushButton(Addstock);
        resetButon->setObjectName("resetButon");
        resetButon->setGeometry(QRect(530, 370, 100, 30));
        resetButon->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:rgb(85, 170, 0);\n"
"border-radius:10px;"));

        retranslateUi(Addstock);

        QMetaObject::connectSlotsByName(Addstock);
    } // setupUi

    void retranslateUi(QWidget *Addstock)
    {
        Addstock->setWindowTitle(QCoreApplication::translate("Addstock", "\346\226\260\345\242\236\345\225\206\345\223\201", nullptr));
        label_1->setText(QCoreApplication::translate("Addstock", "\345\225\206\345\223\201\347\274\226\345\217\267:", nullptr));
        label_2->setText(QCoreApplication::translate("Addstock", "\345\225\206\345\223\201\345\220\215\347\247\260:", nullptr));
        label_3->setText(QCoreApplication::translate("Addstock", "\345\225\206\345\223\201\346\225\260\351\207\217:", nullptr));
        label_4->setText(QCoreApplication::translate("Addstock", "\345\225\206\345\223\201\345\215\225\344\273\267:", nullptr));
        label_5->setText(QCoreApplication::translate("Addstock", "\344\276\233\345\272\224\345\225\206\345\256\266:", nullptr));
        label_6->setText(QCoreApplication::translate("Addstock", "\350\264\237\350\264\243\344\272\272:", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Addstock", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Addstock", "\345\244\207\346\263\250\344\277\241\346\201\257:", nullptr));
        addButton->setText(QCoreApplication::translate("Addstock", "\346\267\273\345\212\240", nullptr));
        exitButton->setText(QCoreApplication::translate("Addstock", "\345\205\263\351\227\255", nullptr));
        resetButon->setText(QCoreApplication::translate("Addstock", "\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Addstock: public Ui_Addstock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTOCK_H
