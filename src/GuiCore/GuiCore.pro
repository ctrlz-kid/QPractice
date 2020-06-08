#-------------------------------------------------
#
# Project created by QtCreator 2020-06-07T00:53:17
#
#-------------------------------------------------


QT       += core gui
QT += widgets

TARGET = GuiCore
TEMPLATE = lib

DEFINES += GUICORE_LIBRARY

SOURCES += guicore.cpp \
    displaycontrolwidget.cpp \
    mainfrom.cpp

HEADERS += guicore.h\
        guicore_global.h \
    displaycontrolwidget.h \
    mainfrom.h



DESTDIR += ../bin

unix {
    target.path = /usr/lib
    INSTALLS += target
}

FORMS += \
    mainfrom.ui
