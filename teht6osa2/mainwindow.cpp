#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    state=1;

    ui->num1->setReadOnly(true);
    ui->num2->setReadOnly(true);
    ui->result->setReadOnly(true);


}

MainWindow::~MainWindow()
{
    delete ui;
    ui=nullptr;
}





void MainWindow::on_N1_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N2_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N3_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N4_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N5_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N6_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N7_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N8_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N9_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N0_clicked()
{
    numberClickedHandler();
}


void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: "<<name;

    QString ButtonNumber=button->text();

    if(state==1){
    number1=number1+ButtonNumber;
    ui->num1->setText(number1);

    qDebug()<<"Number1 luku on "<<number1;
    }

    else if(state==2){
    number2=number2+ButtonNumber;
    ui->num2->setText(number2);

    qDebug()<<"Number2 luku on "<<number2;
    }

}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton * operation = qobject_cast<QPushButton*>(sender());
    QString operationName = operation->objectName();
    qDebug() << "Called operation: "<<operationName;

   // state=2;
}


void MainWindow::on_add_clicked()
{
    if(number1!=""){
    operand=0;
    state=2;
    addSubMulDivClickHandler();
    }


}


void MainWindow::on_sub_clicked()
{
    if(number1!=""){
    operand=1;
    state=2;
    addSubMulDivClickHandler();
    }
}


void MainWindow::on_mul_clicked()
{
    if(number1!=""){
    operand=2;
    state=2;
    addSubMulDivClickHandler();
    }
}


void MainWindow::on_div_clicked()
{
    if(number1!=""){
    operand=3;
    state=2;
    addSubMulDivClickHandler();
    }
}


void MainWindow::on_clear_clicked()
{
    state=1;
    number1="";
    number2="";
    ui->num1->setText("");
    ui->num2->setText("");
    ui->result->setText("");
    qDebug()<<"clear";

}


void MainWindow::on_enter_clicked()
{
    if(number1 != "" && number2 != ""){
    float n1 = number1.toFloat();
    float n2 = number2.toFloat();

    qDebug()<<"number 1 = "<<n1<<" and number 2 = "<<n2;

    switch(operand){
    case 0:
        result=n1+n2;
        break;

    case 1:
        result=n1-n2;
        break;

    case 2:
        result=n1*n2;
        break;

    case 3:
        result=n1/n2;
        break;
    }

    QString resultText = QString::number(result);
    ui->result->setText(resultText);

    }

    qDebug()<<"enter";

}

