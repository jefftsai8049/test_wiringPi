#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    wiringPiSetup();
    pinMode(0,OUTPUT);
    pinMode(1,PWM_OUTPUT);

    clock = new QTimer;
    clock->setInterval(10);
    connect(clock,SIGNAL(timeout()),this,SLOT(serial_receive()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LED_HIGH_pushButton_clicked()
{
    digitalWrite(0,HIGH);
    qDebug() << "high";
}

void MainWindow::on_LED_LOW_pushButton_clicked()
{
    digitalWrite(0,LOW);
    qDebug() << "low";
}

void MainWindow::on_PWM_horizontalSlider_valueChanged(int value)
{
    pwmWrite(1,value);
    qDebug() << value;
}

void MainWindow::on_connect_pushButton_clicked()
{
    ui->connect_pushButton->setEnabled(0);
    if((fd = serialOpen("/dev/ttyACM0",9600)) > 0)
    {
        qDebug() << "com port opened";
        serialFlush(fd);
        clock->start();
    }
    else
    {
        qDebug() << "com port is GG";
    }
}

void MainWindow::serial_receive()
{
    if(serialDataAvail(fd) > 0)
    {
        char msg = serialGetchar(fd);
        QString Qmsg = QString(msg);
        ui->textBrowser->insertPlainText(Qmsg);
    }
}

void MainWindow::on_LED_H_pushButton_clicked()
{
    serialPutchar(fd,'H');
}

void MainWindow::on_LED_L_pushButton_clicked()
{
    serialPutchar(fd,'L');
}
