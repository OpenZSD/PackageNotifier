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
    ExtGraphicsEffect.cpp \
    AboutDialog.cpp \
    DataManager.cpp \
    MainWindow.cpp \
    NameDialog.cpp \
    QueueBrowser.cpp

HEADERS  += \
    UIUtil.h \
    ExtGraphicsEffect.h \
    AboutDialog.h \
    DataManager.h \
    MainWindow.h \
    NameDialog.h \
    QueueBrowser.h

FORMS    += \
    AboutDialog.ui \
    MainWindow.ui \
    NameDialog.ui \
    QueueBrowser.ui

RESOURCES += \
    Imgs.qrc
