#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui=nullptr;
}


void MainWindow::on_btnCount_clicked()
{
    qDebug()<<"Count painike toimii";
    count++;
    QString x = QString::number(count);
    ui->lineEdit->setText(x);
    qDebug()<<"Nappia on painettu "<<count<<" kertaa";
}


void MainWindow::on_btnReset_clicked()
{
    qDebug()<<"Reset painike toimii";
    count=0;
    QString x = QString::number(count);
    ui->lineEdit->setText(x);
}

