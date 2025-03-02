/********************************************************************************
** Form generated from reading UI file 'shakkikello.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAKKIKELLO_H
#define UI_SHAKKIKELLO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Shakkikello
{
public:
    QWidget *centralwidget;
    QProgressBar *p1Progbar;
    QProgressBar *p2Progbar;
    QLabel *gameLbl;
    QPushButton *p1Btn;
    QPushButton *p2Btn;
    QPushButton *startBtn;
    QPushButton *timeBtn2;
    QPushButton *timeBtn1;
    QPushButton *stopBtn;

    void setupUi(QMainWindow *Shakkikello)
    {
        if (Shakkikello->objectName().isEmpty())
            Shakkikello->setObjectName("Shakkikello");
        Shakkikello->resize(560, 386);
        centralwidget = new QWidget(Shakkikello);
        centralwidget->setObjectName("centralwidget");
        p1Progbar = new QProgressBar(centralwidget);
        p1Progbar->setObjectName("p1Progbar");
        p1Progbar->setGeometry(QRect(20, 50, 191, 21));
        QPalette palette;
        QBrush brush(QColor(124, 175, 203, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(55, 37, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        p1Progbar->setPalette(palette);
        p1Progbar->setValue(50);
        p1Progbar->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);
        p1Progbar->setTextVisible(true);
        p2Progbar = new QProgressBar(centralwidget);
        p2Progbar->setObjectName("p2Progbar");
        p2Progbar->setGeometry(QRect(350, 50, 191, 21));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        p2Progbar->setPalette(palette1);
        p2Progbar->setStyleSheet(QString::fromUtf8(""));
        p2Progbar->setValue(50);
        gameLbl = new QLabel(centralwidget);
        gameLbl->setObjectName("gameLbl");
        gameLbl->setGeometry(QRect(0, 157, 561, 51));
        QFont font;
        font.setPointSize(20);
        gameLbl->setFont(font);
        gameLbl->setAlignment(Qt::AlignmentFlag::AlignCenter);
        p1Btn = new QPushButton(centralwidget);
        p1Btn->setObjectName("p1Btn");
        p1Btn->setGeometry(QRect(60, 100, 111, 31));
        QFont font1;
        font1.setPointSize(12);
        p1Btn->setFont(font1);
        p2Btn = new QPushButton(centralwidget);
        p2Btn->setObjectName("p2Btn");
        p2Btn->setGeometry(QRect(390, 100, 111, 31));
        p2Btn->setFont(font1);
        startBtn = new QPushButton(centralwidget);
        startBtn->setObjectName("startBtn");
        startBtn->setGeometry(QRect(80, 320, 121, 31));
        QFont font2;
        font2.setPointSize(15);
        startBtn->setFont(font2);
        timeBtn2 = new QPushButton(centralwidget);
        timeBtn2->setObjectName("timeBtn2");
        timeBtn2->setGeometry(QRect(320, 230, 80, 31));
        timeBtn2->setFont(font2);
        timeBtn1 = new QPushButton(centralwidget);
        timeBtn1->setObjectName("timeBtn1");
        timeBtn1->setGeometry(QRect(160, 230, 80, 31));
        timeBtn1->setFont(font2);
        stopBtn = new QPushButton(centralwidget);
        stopBtn->setObjectName("stopBtn");
        stopBtn->setGeometry(QRect(349, 320, 121, 31));
        stopBtn->setFont(font2);
        Shakkikello->setCentralWidget(centralwidget);

        retranslateUi(Shakkikello);

        QMetaObject::connectSlotsByName(Shakkikello);
    } // setupUi

    void retranslateUi(QMainWindow *Shakkikello)
    {
        Shakkikello->setWindowTitle(QCoreApplication::translate("Shakkikello", "Shakkikello", nullptr));
        p1Progbar->setFormat(QCoreApplication::translate("Shakkikello", "%p%", nullptr));
        gameLbl->setText(QCoreApplication::translate("Shakkikello", "Game stopped", nullptr));
        p1Btn->setText(QCoreApplication::translate("Shakkikello", "Switch player", nullptr));
        p2Btn->setText(QCoreApplication::translate("Shakkikello", "Switch player", nullptr));
        startBtn->setText(QCoreApplication::translate("Shakkikello", "Start game", nullptr));
        timeBtn2->setText(QCoreApplication::translate("Shakkikello", "5 min", nullptr));
        timeBtn1->setText(QCoreApplication::translate("Shakkikello", "120 sec", nullptr));
        stopBtn->setText(QCoreApplication::translate("Shakkikello", "Stop game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Shakkikello: public Ui_Shakkikello {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAKKIKELLO_H
