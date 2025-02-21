#include "counter.h"
#include "ui_counter.h"

Counter::Counter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Counter)
{
    ui->setupUi(this);
}

Counter::~Counter()
{
    delete ui;
}

void Counter::on_incBtn_clicked()
{
    QString str = ui->numScr->text();
    int nro = str.toInt();
    qDebug() << "Nro on = " << nro;
    nro++;
    QString newStr = QString::number(nro);
    qDebug() << "Uusi nro on = " << nro;
    ui->numScr->setText(newStr);
}


void Counter::on_resetBtn_clicked()
{
    QString str = ui->numScr->text();
    QString reset = "0";
    ui->numScr->setText(reset);
    qDebug() << "Numero resetattu";

}

