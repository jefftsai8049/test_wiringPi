/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *LED_HIGH_pushButton;
    QPushButton *LED_LOW_pushButton;
    QSlider *PWM_horizontalSlider;
    QTextBrowser *textBrowser;
    QPushButton *connect_pushButton;
    QPushButton *LED_H_pushButton;
    QPushButton *LED_L_pushButton;
    QPushButton *clear_pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(456, 299);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        LED_HIGH_pushButton = new QPushButton(centralWidget);
        LED_HIGH_pushButton->setObjectName(QStringLiteral("LED_HIGH_pushButton"));
        LED_HIGH_pushButton->setGeometry(QRect(20, 70, 141, 71));
        LED_LOW_pushButton = new QPushButton(centralWidget);
        LED_LOW_pushButton->setObjectName(QStringLiteral("LED_LOW_pushButton"));
        LED_LOW_pushButton->setGeometry(QRect(20, 150, 141, 71));
        PWM_horizontalSlider = new QSlider(centralWidget);
        PWM_horizontalSlider->setObjectName(QStringLiteral("PWM_horizontalSlider"));
        PWM_horizontalSlider->setGeometry(QRect(20, 10, 141, 41));
        PWM_horizontalSlider->setMaximum(1024);
        PWM_horizontalSlider->setOrientation(Qt::Horizontal);
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(180, 40, 256, 171));
        connect_pushButton = new QPushButton(centralWidget);
        connect_pushButton->setObjectName(QStringLiteral("connect_pushButton"));
        connect_pushButton->setGeometry(QRect(180, 10, 80, 23));
        LED_H_pushButton = new QPushButton(centralWidget);
        LED_H_pushButton->setObjectName(QStringLiteral("LED_H_pushButton"));
        LED_H_pushButton->setGeometry(QRect(270, 10, 80, 23));
        LED_L_pushButton = new QPushButton(centralWidget);
        LED_L_pushButton->setObjectName(QStringLiteral("LED_L_pushButton"));
        LED_L_pushButton->setGeometry(QRect(360, 10, 80, 23));
        clear_pushButton = new QPushButton(centralWidget);
        clear_pushButton->setObjectName(QStringLiteral("clear_pushButton"));
        clear_pushButton->setGeometry(QRect(180, 220, 80, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 456, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(clear_pushButton, SIGNAL(clicked()), textBrowser, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        LED_HIGH_pushButton->setText(QApplication::translate("MainWindow", "LED on", 0));
        LED_LOW_pushButton->setText(QApplication::translate("MainWindow", "LED off", 0));
        connect_pushButton->setText(QApplication::translate("MainWindow", "Connect", 0));
        LED_H_pushButton->setText(QApplication::translate("MainWindow", "Open LED", 0));
        LED_L_pushButton->setText(QApplication::translate("MainWindow", "Close LED", 0));
        clear_pushButton->setText(QApplication::translate("MainWindow", "Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
