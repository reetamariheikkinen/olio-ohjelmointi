#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBarPlayer1->setMinimum(0);
    ui->progressBarPlayer2->setMinimum(0);


    ui->pushButton5min->setDisabled(false);
    ui->pushButton120sec->setDisabled(false);
    ui->pushButtonStop->setDisabled(true);
    ui->pushButtonStart->setDisabled(true);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete objectTimer;
    objectTimer=nullptr;
}

void MainWindow::timeout()
{
    updateProgressBar();

    gameTime++;
    qDebug()<<"Aikaa on kulunut "<<gameTime<<" sekunttia :)\n";

    if(currentPlayer==1){
    player1Time--;
    }

    if(currentPlayer==2){
    player2Time--;
    }

    updateProgressBar();

    if(player1Time==0){
    objectTimer->stop();
    ui->pushButtonStop->setDisabled(true);
    setGameInfoText("Player 2 Won!",25);
    updateProgressBar();
    QTimer::singleShot(3000, this, SLOT(on_pushButtonStop_clicked()));
    }

    if(player2Time==0){
    objectTimer->stop();
    ui->pushButtonStop->setDisabled(true);
    setGameInfoText("Player 2 Won!",25);
    updateProgressBar();
    QTimer::singleShot(3000, this, SLOT(on_pushButtonStop_clicked()));
    }

}


void MainWindow::on_pushButtonStart_clicked()
{
    currentPlayer=1;

    objectTimer=new QTimer();
    connect(objectTimer, SIGNAL(timeout()), this, SLOT(timeout()));
    objectTimer->start(1000);

    ui->pushButtonStop->setDisabled(false);
    ui->pushButtonSwitchPlayer1->setDisabled(false);
    ui->pushButtonSwitchPlayer2->setDisabled(false);
    ui->pushButtonStart->setDisabled(true);
    ui->pushButton5min->setDisabled(true);
    ui->pushButton120sec->setDisabled(true);

    setGameInfoText("Game ongoing",20);


}


void MainWindow::on_pushButtonStop_clicked()
{
    objectTimer->stop();
    gameTime=0;
    player1Time=0;
    player2Time=0;


    ui->pushButtonStart->setDisabled(true);
    ui->pushButton5min->setDisabled(false);
    ui->pushButton120sec->setDisabled(false);
    ui->pushButtonStop->setDisabled(true);

    updateProgressBar();
    setGameInfoText("New game via start button",20);

}


void MainWindow::on_pushButton120sec_clicked()
{

    ui->progressBarPlayer1->setMaximum(120);
    ui->progressBarPlayer2->setMaximum(120);
    player1Time=120;
    player2Time=120;
    ui->pushButtonStart->setDisabled(false);
    setGameInfoText("Ready to play",20);

}


void MainWindow::on_pushButton5min_clicked()
{

    ui->progressBarPlayer1->setMaximum(300);
    ui->progressBarPlayer2->setMaximum(300);
    player1Time=300;
    player2Time=300;
    ui->pushButtonStart->setDisabled(false);
    setGameInfoText("Ready to play",20);
}


void MainWindow::on_pushButtonSwitchPlayer1_clicked()
{
    currentPlayer=2;
}


void MainWindow::on_pushButtonSwitchPlayer2_clicked()
{
    currentPlayer=1;
}

void MainWindow::updateProgressBar()
{
    ui->progressBarPlayer1->setValue(player1Time);
    ui->progressBarPlayer2->setValue(player2Time);

}

void MainWindow::setGameInfoText(QString a, short b)
{
    QFont font=ui->labelText->font();
    font.setPointSize(b);
    ui->labelText->setText(a);

}







