#ifndef LASKIN_H
#define LASKIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Laskin;
}
QT_END_NAMESPACE

class Laskin : public QMainWindow
{
    Q_OBJECT

public:
    Laskin(QWidget *parent = nullptr);
    ~Laskin();

private slots:
    void on_btn0_clicked();
    void on_btn1_clicked();
    void on_btn2_clicked();
    void on_btn3_clicked();
    void on_btn4_clicked();
    void on_btn5_clicked();
    void on_btn6_clicked();
    void on_btn7_clicked();
    void on_btn8_clicked();
    void on_btn9_clicked();


    void on_btnClr_clicked();

    void on_btnDiv_clicked();

    void on_btnMul_clicked();

    void on_btnMin_clicked();

    void on_btnPlus_clicked();

    void on_btnEql_clicked();

    void on_btnEnt_clicked();

private:
    Ui::Laskin *ui;
    QString num1, num2;
    int state = 1;
    float result;
    short operand;

    void numClkdHandler(int n);
    void opClkdHandler(QString o);
};
#endif // LASKIN_H
