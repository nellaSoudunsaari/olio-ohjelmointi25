#include "laskin.h"
#include "ui_laskin.h"

Laskin::Laskin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Laskin)
{
    ui->setupUi(this);
}

Laskin::~Laskin()
{
    delete ui;
}

void Laskin::on_btn0_clicked()
{
    QString str = ui->btn0->text();
    int n = str.toInt();
    numClkdHandler(n);
}
void Laskin::on_btn1_clicked()
{
    QString str = ui->btn1->text();
    int n = str.toInt();
    numClkdHandler(n);
}
void Laskin::on_btn2_clicked()
{
    QString str = ui->btn2->text();
    int n = str.toInt();
    numClkdHandler(n);
}
void Laskin::on_btn3_clicked()
{
    QString str = ui->btn3->text();
    int n = str.toInt();
    numClkdHandler(n);

}
void Laskin::on_btn4_clicked()
{
    QString str = ui->btn4->text();
    int n = str.toInt();
    numClkdHandler(n);
}
void Laskin::on_btn5_clicked()
{
    QString str = ui->btn5->text();
    int n = str.toInt();
    numClkdHandler(n);
}
void Laskin::on_btn6_clicked()
{
    QString str = ui->btn6->text();
    int n = str.toInt();
    numClkdHandler(n);
}
void Laskin::on_btn7_clicked()
{
    QString str = ui->btn7->text();
    int n = str.toInt();
    numClkdHandler(n);
}
void Laskin::on_btn8_clicked()
{
    QString str = ui->btn8->text();
    int n = str.toInt();
    numClkdHandler(n);
}
void Laskin::on_btn9_clicked()
{
    QString str = ui->btn9->text();
    int n = str.toInt();
    numClkdHandler(n);
}

void Laskin::on_btnClr_clicked()
{
    QString clr = "";
    state = 1;
    ui->num1->setText(clr);
    ui->num2->setText(clr);
    ui->result->setText(clr);
    ui->operand->setText(clr);

}
void Laskin::on_btnDiv_clicked()
{
    QString op = ui->btnDiv->text();
    opClkdHandler(op);
    qDebug() << "Tämänhetkinen tila operaattorin jälkeen: " << state;
}
void Laskin::on_btnMul_clicked()
{
    QString op = ui->btnMul->text();
    opClkdHandler(op);
    qDebug() << "Tämänhetkinen tila operaattorin jälkeen: " << state;


}
void Laskin::on_btnMin_clicked()
{
    QString op = ui->btnMin->text();
    opClkdHandler(op);
    qDebug() << "Tämänhetkinen tila operaattorin jälkeen: " << state;
}
void Laskin::on_btnPlus_clicked()
{
    QString op = ui->btnPlus->text();
    opClkdHandler(op);
    qDebug() << "Tämänhetkinen tila operaattorin jälkeen: " << state;
}

void Laskin::on_btnEql_clicked()
{
    qDebug() << "Tämänhetkinen tila: " << state;
    QString op = ui->operand->text();
    qDebug() << "Operaattori: " << op;



    if(state == 4){
        if(op == "+"){
            QString num1Str = ui->num1->text();
            int num1 = num1Str.toInt();

            QString num2Str = ui->num2->text();
            int num2 = num2Str.toInt();

            result = num1 + num2;
            qDebug() << "Pluslasku: " << num1 << "+" << num2 << "=" << result;
            QString res = QString::number(result);
            ui->result->setText(res);

        } else if (op == "-"){
            QString num1Str = ui->num1->text();
            int num1 = num1Str.toInt();

            QString num2Str = ui->num2->text();
            int num2 = num2Str.toInt();

            result = num1 - num2;
            qDebug() << "Miinuslasku: " << num1 << "-" << num2 << "=" << result;
            QString res = QString::number(result);
            ui->result->setText(res);

        } else if (op == "/"){
            QString num1Str = ui->num1->text();
            float num1 = num1Str.toFloat();

            QString num2Str = ui->num2->text();
            float num2 = num2Str.toFloat();

            if(num1 == 0 || num2 == 0){
                ui->result->setText("Can't divide by 0");
            } else{
                result = num1 / num2;
                qDebug() << "Jakolasku: " << num1 << "/" << num2 << "=" << result;
                QString res = QString::number(result);
                ui->result->setText(res);
            }
        } else if (op == "*"){
            QString num1Str = ui->num1->text();
            int num1 = num1Str.toInt();

            QString num2Str = ui->num2->text();
            int num2 = num2Str.toInt();

            result = num1 * num2;
            qDebug() << "Kertolasku: " << num1 << "*" << num2 << "=" << result;
            QString res = QString::number(result);
            ui->result->setText(res);
        }
        qDebug() << "Tämänhetkinen tila: " << state;

        state = 1;
    }
}

void Laskin::numClkdHandler(int n)
{
    qDebug() << "Numero painettu: " << n;
    QString str = QString::number(n);
    if(state == 1){
        QString num1Str = ui->num1->text();
        ui->num1->setText(ui->num1->text() + str);
        qDebug() << "Tämänhetkinen tila numero1: " << state;
    } else if (state == 3){
        QString num2Str = ui->num2->text();
        ui->num2->setText(ui->num2->text() + str);
        qDebug() << "Tämänhetkinen tila numero2: " << state;
    }
}

void Laskin::opClkdHandler(QString o)
{
    qDebug() << "Operaattoria painettu: " << o;
    if(state == 2){
        ui->operand->setText(o);
        qDebug() << "Tämänhetkinen tila tekstimuutoksen jälkeen: " << state;
    }
}


void Laskin::on_btnEnt_clicked()
{
    if(state == 1){
        state = 2;
    } else if (state == 2){
        state = 3;
    } else if (state == 3){
        state = 4;
    }
}

