#-------------------------------------------------
#
# Project created by QtCreator 2016-05-15T22:54:12
#
#-------------------------------------------------
win32:RC_ICONS += img/icon.ico
QT       += core gui network webkit

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Finish
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    showform.cpp \
    addform.cpp \
    aboutform.cpp \

    about.cpp

HEADERS  += mainwindow.h \
    showform.h \
    addform.h \
    aboutform.h

FORMS    += mainwindow.ui \
    showform.ui \
    addform.ui \
    aboutform.ui \


RESOURCES += \
    resuorce.qrc

DISTFILES +=
