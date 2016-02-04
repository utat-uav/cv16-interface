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
    itemmaker.cpp \
    targetlistwindow.cpp \
    targetlist.cpp \
    targetlistitem.cpp \
    targetmaker.cpp \
    targetwindow.cpp \
    lifesupport.cpp

HEADERS  += mainwindow.h \
    imagewidget.h \
    itemmaker.h \
    targetlistwindow.h \
    targetlist.h \
    targetlistitem.h \
    targetmaker.h \
    targetwindow.h \
    lifesupport.h

FORMS    += mainwindow.ui \
    imagewidget.ui \
    itemmaker.ui \
    targetlistwindow.ui \
    targetmaker.ui \
    targetwindow.ui

DISTFILES += \
    clasic.png \
    delete85.png \
    down.png \
    round75.png \
    up.png

RESOURCES += \
    resouces.qrc

win32:RC_ICONS += Icon.ico
