/********************************************************************************
** Form generated from reading UI file 'inAndOutbord.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INANDOUTBORD_H
#define UI_INANDOUTBORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InAndOutbord
{
public:
    QPushButton *addButton;
    QPushButton *closeButton;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QLabel *label_1;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *transButton;
    QPushButton *pushButton;

    void setupUi(QWidget *InAndOutbord)
    {
        if (InAndOutbord->objectName().isEmpty())
            InAndOutbord->setObjectName("InAndOutbord");
        InAndOutbord->resize(714, 244);
        addButton = new QPushButton(InAndOutbord);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(430, 200, 83, 24));
        closeButton = new QPushButton(InAndOutbord);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(540, 200, 83, 24));
        groupBox = new QGroupBox(InAndOutbord);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(110, 60, 551, 101));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(100, 40, 130, 24));
        label_1 = new QLabel(groupBox);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(10, 40, 80, 24));
        label_1->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:rgb(133, 133, 198);\n"
"border-radius:10px;"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(290, 40, 80, 24));
        label_2->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:rgb(133, 133, 198);\n"
"border-radius:10px;"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(380, 40, 130, 23));
        transButton = new QPushButton(InAndOutbord);
        transButton->setObjectName("transButton");
        transButton->setGeometry(QRect(590, 10, 120, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\351\273\221\344\275\223")});
        font.setPointSize(12);
        transButton->setFont(font);
        transButton->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:rgb(85, 170, 127);\n"
"border-radius:10px;"));
        pushButton = new QPushButton(InAndOutbord);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 100, 30));
        pushButton->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:rgb(133, 133, 198);\n"
"border-radius:10px;"));

        retranslateUi(InAndOutbord);

        QMetaObject::connectSlotsByName(InAndOutbord);
    } // setupUi

    void retranslateUi(QWidget *InAndOutbord)
    {
        InAndOutbord->setWindowTitle(QCoreApplication::translate("InAndOutbord", "Form", nullptr));
        addButton->setText(QCoreApplication::translate("InAndOutbord", "\345\225\206\345\223\201\345\205\245\345\272\223", nullptr));
        closeButton->setText(QCoreApplication::translate("InAndOutbord", "\345\205\263\351\227\255", nullptr));
        groupBox->setTitle(QString());
        label_1->setText(QCoreApplication::translate("InAndOutbord", "\345\225\206\345\223\201\347\274\226\345\217\267:", nullptr));
        label_2->setText(QCoreApplication::translate("InAndOutbord", "\345\225\206\345\223\201\346\225\260\351\207\217:", nullptr));
        transButton->setText(QCoreApplication::translate("InAndOutbord", "\346\210\221\350\246\201\345\207\272\345\272\223", nullptr));
        pushButton->setText(QCoreApplication::translate("InAndOutbord", "\345\205\263\344\272\216\345\207\272/\345\205\245\345\272\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InAndOutbord: public Ui_InAndOutbord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INANDOUTBORD_H
