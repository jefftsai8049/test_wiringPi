#-------------------------------------------------
#
# Project created by QtCreator 2015-03-27T10:23:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test_wiringPi
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

LIBS += /usr/local/lib/libwiringPi.so -lwiringPi

INCLUDEPATH += /usr/local/include
