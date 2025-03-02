#ifndef SHAKKIKELLO_H
#define SHAKKIKELLO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Shakkikello;
}
QT_END_NAMESPACE

class Shakkikello : public QMainWindow
{
    Q_OBJECT

public:
    Shakkikello(QWidget *parent = nullptr);
    ~Shakkikello();

private slots:
    void on_p1Btn_clicked();

    void on_p2Btn_clicked();

    void on_timeBtn1_clicked();

    void on_timeBtn2_clicked();

    void on_startBtn_clicked();

    void on_stopBtn_clicked();

    void updateProgBar();

private:
    Ui::Shakkikello *ui;

    int p1Time = 0;
    int p2Time = 0;
    int currentPlayer = 0;
    int gameTime = 0;

    QTimer *timer = nullptr;

    void setGameInfotxt(QString, short);

};
#endif // SHAKKIKELLO_H
