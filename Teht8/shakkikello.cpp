#include "shakkikello.h"
#include "ui_shakkikello.h"
#include <QTimer>

Shakkikello::Shakkikello(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Shakkikello)
{
    ui->setupUi(this);
    timer = nullptr;

    setGameInfotxt("Select a game time and press start!", 20);
}

Shakkikello::~Shakkikello()
{
    if(timer){
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    delete ui;
}

void Shakkikello::on_p1Btn_clicked()
{
    currentPlayer = 2;
}


void Shakkikello::on_p2Btn_clicked()
{
    currentPlayer = 1;
}


void Shakkikello::on_timeBtn1_clicked()
{
    gameTime = 120;
    setGameInfotxt("Ready to start", 20);
}


void Shakkikello::on_timeBtn2_clicked()
{
    gameTime = 300;
    setGameInfotxt("Ready to start", 20);
}


void Shakkikello::on_startBtn_clicked()
{
    p1Time = gameTime;
    p2Time = gameTime;
    currentPlayer = 1;

    ui->p1Progbar->setRange(0, gameTime);
    ui->p2Progbar->setRange(0, gameTime);
    ui->p1Progbar->setValue(gameTime);
    ui->p2Progbar->setValue(gameTime);

    setGameInfotxt("Game in progress", 20);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Shakkikello::updateProgBar);
    timer->setInterval(1000);
    timer->start();
}


void Shakkikello::on_stopBtn_clicked()
{
    if(timer){
        timer->stop();
        delete timer;
        timer = nullptr;
    }

    setGameInfotxt("Start a new game with Start-button!", 18);
}

void Shakkikello::updateProgBar(){

    if(currentPlayer == 1){
        p1Time = p1Time - 1;
        ui->p1Progbar->setValue(p1Time);

        if(p1Time <= 0){
            timer->stop();
            setGameInfotxt("Player2 won!", 20);
        }
    }else{
        p2Time = p2Time - 1;
        ui->p2Progbar->setValue(p2Time);

        if(p2Time <= 0){
            timer->stop();
            setGameInfotxt("Player1 won!", 20);
        }
    }
}

void Shakkikello::setGameInfotxt(QString txt, short fontSize){

    QFont font = ui->gameLbl->font();
    font.setPointSize(fontSize);

    ui->gameLbl->setText(txt);
    ui->gameLbl->setFont(font);
}

