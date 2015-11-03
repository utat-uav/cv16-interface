#-------------------------------------------------
#
# Project created by QtCreator 2015-11-02T18:54:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CVInterface
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    imagewidget.cpp \
    itemmaker.cpp

HEADERS  += mainwindow.h \
    imagewidget.h \
    itemmaker.h

FORMS    += mainwindow.ui \
    imagewidget.ui \
    itemmaker.ui
