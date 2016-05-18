#-------------------------------------------------
#
# Project created by QtCreator 2016-05-15T22:54:12
#
#-------------------------------------------------
win32:RC_ICONS += img/icon.ico
QT       += core gui webkitwidgets
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Finish
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    showform.cpp \
    addform.cpp \
    aboutform.cpp \
    webform.cpp

    about.cpp

HEADERS  += mainwindow.h \
    showform.h \
    addform.h \
    aboutform.h \
    webform.h

FORMS    += mainwindow.ui \
    showform.ui \
    addform.ui \
    aboutform.ui \
    webform.ui


RESOURCES += \
    resuorce.qrc

DISTFILES +=
