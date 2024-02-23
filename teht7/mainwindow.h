#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timeout();

private slots:
    void on_pushButtonStart_clicked();

    void on_pushButtonStop_clicked();

    void on_pushButton120sec_clicked();

    void on_pushButton5min_clicked();

    void on_pushButtonSwitchPlayer1_clicked();

    void on_pushButtonSwitchPlayer2_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *objectTimer;
    short player1Time;
    short player2Time;
    short currentPlayer=1;
    short gameTime;
    void updateProgressBar();
    void setGameInfoText(QString a,short b);

};
#endif // MAINWINDOW_H
