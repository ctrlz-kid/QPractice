#-------------------------------------------------
#
# Project created by QtCreator 2020-06-07T00:59:24
#
#-------------------------------------------------

QT += core gui
QT += widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GuiMain
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui



DESTDIR += ../bin

win32: LIBS += -L$$OUT_PWD/../bin/ -lGuiCore

INCLUDEPATH += $$PWD/../GuiCore
DEPENDPATH += $$PWD/../GuiCore
