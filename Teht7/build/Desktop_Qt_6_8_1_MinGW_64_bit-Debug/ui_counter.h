/********************************************************************************
** Form generated from reading UI file 'counter.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTER_H
#define UI_COUNTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Counter
{
public:
    QWidget *centralwidget;
    QPushButton *incBtn;
    QPushButton *resetBtn;
    QLineEdit *numScr;

    void setupUi(QMainWindow *Counter)
    {
        if (Counter->objectName().isEmpty())
            Counter->setObjectName("Counter");
        Counter->resize(357, 186);
        Counter->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Counter);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52514, y1:0, x2:0.631, y2:0.988636, stop:0 rgba(170, 85, 255, 255), stop:0.759777 rgba(255, 170, 255, 255));"));
        incBtn = new QPushButton(centralwidget);
        incBtn->setObjectName("incBtn");
        incBtn->setGeometry(QRect(210, 40, 111, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Script MT")});
        font.setPointSize(12);
        incBtn->setFont(font);
        incBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        resetBtn = new QPushButton(centralwidget);
        resetBtn->setObjectName("resetBtn");
        resetBtn->setGeometry(QRect(210, 110, 111, 41));
        resetBtn->setFont(font);
        resetBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        numScr = new QLineEdit(centralwidget);
        numScr->setObjectName("numScr");
        numScr->setGeometry(QRect(30, 30, 151, 131));
        QFont font1;
        font1.setPointSize(24);
        numScr->setFont(font1);
        numScr->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        numScr->setFrame(true);
        numScr->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Counter->setCentralWidget(centralwidget);

        retranslateUi(Counter);

        QMetaObject::connectSlotsByName(Counter);
    } // setupUi

    void retranslateUi(QMainWindow *Counter)
    {
        Counter->setWindowTitle(QCoreApplication::translate("Counter", "Counter", nullptr));
        incBtn->setText(QCoreApplication::translate("Counter", "Increase", nullptr));
        resetBtn->setText(QCoreApplication::translate("Counter", "Reset", nullptr));
        numScr->setText(QCoreApplication::translate("Counter", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Counter: public Ui_Counter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTER_H
