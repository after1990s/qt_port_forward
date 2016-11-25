#-------------------------------------------------
#
# Project created by QtCreator 2016-11-23T13:21:01
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt_port_forward
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    forwardobject.cpp

HEADERS  += mainwindow.h \
    qheaders.h \
    forwardobject.h

FORMS    += mainwindow.ui
