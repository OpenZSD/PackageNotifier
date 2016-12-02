#-------------------------------------------------
#
# Project created by QtCreator 2016-09-17T13:54:47
#
#-------------------------------------------------

QT       += core gui
QMAKE_CXXFLAGS += -std=c++11

greaterThan(QT_MAJOR_VERSION, 3): QT += widgets

TARGET = PackageNotify
TEMPLATE = app


SOURCES += main.cpp\
        mainWindow.cpp \
    nameDialog.cpp \
    queueBrowser.cpp \
    aboutDialog.cpp \
    ExtGraphicsEffect.cpp \
    dataManager.cpp

HEADERS  += mainWindow.h \
    nameDialog.h \
    queueBrowser.h \
    aboutDialog.h \
    UIUtil.h \
    ExtGraphicsEffect.h \
    dataManager.h

FORMS    += mainWindow.ui \
    nameDialog.ui \
    queueBrowser.ui \
    aboutDialog.ui

RESOURCES += \
    Imgs.qrc
