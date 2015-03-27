#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <wiringPi.h>
#include <wiringSerial.h>
#include <QTimer>
#include <QString>




namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_LED_HIGH_pushButton_clicked();

    void on_LED_LOW_pushButton_clicked();

    void on_PWM_horizontalSlider_valueChanged(int value);

    void on_connect_pushButton_clicked();

    void serial_receive();

    void on_LED_H_pushButton_clicked();

    void on_LED_L_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    QTimer *clock;

    int fd;
};

#endif // MAINWINDOW_H
