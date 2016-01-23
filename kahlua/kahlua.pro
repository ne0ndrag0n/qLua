#-------------------------------------------------
#
# Project created by QtCreator 2015-10-11T19:30:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = kahlua
TEMPLATE = app

LIBS += -lqscintilla2

SOURCES += main.cpp\
        kahluaide.cpp

HEADERS  += kahluaide.h

FORMS    += kahluaide.ui
