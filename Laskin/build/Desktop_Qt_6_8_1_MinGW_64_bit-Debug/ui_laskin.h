/********************************************************************************
** Form generated from reading UI file 'laskin.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LASKIN_H
#define UI_LASKIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Laskin
{
public:
    QWidget *centralwidget;
    QLineEdit *result;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btn0;
    QPushButton *btnPlus;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn3;
    QPushButton *btnEql;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btnMin;
    QPushButton *btnMul;
    QPushButton *btnDiv;
    QPushButton *btnClr;
    QLineEdit *num1;
    QLineEdit *operand;
    QLineEdit *num2;
    QPushButton *btnEnt;

    void setupUi(QMainWindow *Laskin)
    {
        if (Laskin->objectName().isEmpty())
            Laskin->setObjectName("Laskin");
        Laskin->resize(413, 525);
        Laskin->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Laskin);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(".QWidget{\n"
"background-image: url(:/ui/kuvat/laskinbg.jpg);\n"
"}\n"
".QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0.52, y1:0, x2:0.519553, y2:1, stop:0 rgba(239, 255, 230, 255), stop:1 rgba(161, 244, 162, 255));\n"
"color: #000000;\n"
"}\n"
".QLineEdit{\n"
"background-color: #FFFFFF;\n"
"color: #000000;\n"
"}\n"
".QLineEdit #enabled{\n"
"background-color: #000000;\n"
"}"));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setEnabled(false);
        result->setGeometry(QRect(20, 100, 361, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Terminal")});
        font.setPointSize(22);
        result->setFont(font);
        result->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing);
        result->setReadOnly(true);
        btn7 = new QPushButton(centralwidget);
        btn7->setObjectName("btn7");
        btn7->setGeometry(QRect(20, 240, 60, 60));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Terminal")});
        font1.setPointSize(16);
        btn7->setFont(font1);
        btn8 = new QPushButton(centralwidget);
        btn8->setObjectName("btn8");
        btn8->setGeometry(QRect(100, 240, 60, 60));
        btn8->setFont(font1);
        btn9 = new QPushButton(centralwidget);
        btn9->setObjectName("btn9");
        btn9->setGeometry(QRect(180, 240, 60, 60));
        btn9->setFont(font1);
        btn0 = new QPushButton(centralwidget);
        btn0->setObjectName("btn0");
        btn0->setGeometry(QRect(20, 450, 221, 60));
        btn0->setFont(font1);
        btnPlus = new QPushButton(centralwidget);
        btnPlus->setObjectName("btnPlus");
        btnPlus->setGeometry(QRect(250, 380, 131, 60));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Terminal")});
        font2.setPointSize(20);
        btnPlus->setFont(font2);
        btn4 = new QPushButton(centralwidget);
        btn4->setObjectName("btn4");
        btn4->setGeometry(QRect(20, 310, 60, 60));
        btn4->setFont(font1);
        btn5 = new QPushButton(centralwidget);
        btn5->setObjectName("btn5");
        btn5->setGeometry(QRect(100, 310, 60, 60));
        btn5->setFont(font1);
        btn6 = new QPushButton(centralwidget);
        btn6->setObjectName("btn6");
        btn6->setGeometry(QRect(180, 310, 60, 60));
        btn6->setFont(font1);
        btn3 = new QPushButton(centralwidget);
        btn3->setObjectName("btn3");
        btn3->setGeometry(QRect(180, 380, 60, 60));
        btn3->setFont(font1);
        btnEql = new QPushButton(centralwidget);
        btnEql->setObjectName("btnEql");
        btnEql->setGeometry(QRect(250, 450, 131, 60));
        btnEql->setFont(font2);
        btn1 = new QPushButton(centralwidget);
        btn1->setObjectName("btn1");
        btn1->setGeometry(QRect(20, 380, 60, 60));
        btn1->setFont(font1);
        btn2 = new QPushButton(centralwidget);
        btn2->setObjectName("btn2");
        btn2->setGeometry(QRect(100, 380, 60, 60));
        btn2->setFont(font1);
        btnMin = new QPushButton(centralwidget);
        btnMin->setObjectName("btnMin");
        btnMin->setGeometry(QRect(250, 310, 131, 60));
        btnMin->setFont(font2);
        btnMul = new QPushButton(centralwidget);
        btnMul->setObjectName("btnMul");
        btnMul->setGeometry(QRect(250, 240, 131, 60));
        btnMul->setFont(font2);
        btnDiv = new QPushButton(centralwidget);
        btnDiv->setObjectName("btnDiv");
        btnDiv->setGeometry(QRect(250, 170, 131, 60));
        btnDiv->setFont(font2);
        btnClr = new QPushButton(centralwidget);
        btnClr->setObjectName("btnClr");
        btnClr->setGeometry(QRect(20, 170, 111, 60));
        btnClr->setFont(font1);
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName("num1");
        num1->setEnabled(true);
        num1->setGeometry(QRect(20, 30, 131, 51));
        num1->setFont(font);
        num1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        num1->setReadOnly(true);
        operand = new QLineEdit(centralwidget);
        operand->setObjectName("operand");
        operand->setEnabled(false);
        operand->setGeometry(QRect(170, 30, 61, 51));
        operand->setFont(font);
        operand->setAlignment(Qt::AlignmentFlag::AlignCenter);
        operand->setReadOnly(true);
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName("num2");
        num2->setEnabled(false);
        num2->setGeometry(QRect(250, 30, 131, 51));
        num2->setFont(font);
        num2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        num2->setReadOnly(true);
        btnEnt = new QPushButton(centralwidget);
        btnEnt->setObjectName("btnEnt");
        btnEnt->setGeometry(QRect(130, 170, 111, 60));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Terminal")});
        font3.setPointSize(10);
        btnEnt->setFont(font3);
        btnEnt->setAutoFillBackground(false);
        btnEnt->setStyleSheet(QString::fromUtf8(""));
        Laskin->setCentralWidget(centralwidget);

        retranslateUi(Laskin);

        QMetaObject::connectSlotsByName(Laskin);
    } // setupUi

    void retranslateUi(QMainWindow *Laskin)
    {
        Laskin->setWindowTitle(QCoreApplication::translate("Laskin", "Laskin", nullptr));
        result->setText(QString());
        btn7->setText(QCoreApplication::translate("Laskin", "7", nullptr));
        btn8->setText(QCoreApplication::translate("Laskin", "8", nullptr));
        btn9->setText(QCoreApplication::translate("Laskin", "9", nullptr));
        btn0->setText(QCoreApplication::translate("Laskin", "0", nullptr));
        btnPlus->setText(QCoreApplication::translate("Laskin", "+", nullptr));
        btn4->setText(QCoreApplication::translate("Laskin", "4", nullptr));
        btn5->setText(QCoreApplication::translate("Laskin", "5", nullptr));
        btn6->setText(QCoreApplication::translate("Laskin", "6", nullptr));
        btn3->setText(QCoreApplication::translate("Laskin", "3", nullptr));
        btnEql->setText(QCoreApplication::translate("Laskin", "=", nullptr));
        btn1->setText(QCoreApplication::translate("Laskin", "1", nullptr));
        btn2->setText(QCoreApplication::translate("Laskin", "2", nullptr));
        btnMin->setText(QCoreApplication::translate("Laskin", "-", nullptr));
        btnMul->setText(QCoreApplication::translate("Laskin", "*", nullptr));
        btnDiv->setText(QCoreApplication::translate("Laskin", "/", nullptr));
        btnClr->setText(QCoreApplication::translate("Laskin", "C", nullptr));
        num1->setText(QString());
        operand->setText(QString());
        num2->setText(QString());
        btnEnt->setText(QCoreApplication::translate("Laskin", "Enter number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Laskin: public Ui_Laskin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LASKIN_H
