#-------------------------------------------------
#
# Project created by QtCreator 2015-10-11T19:30:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = kahlua
TEMPLATE = app

INCLUDEPATH += /usr/include/lua5.2/

LIBS += -lqscintilla2 -llua5.2

SOURCES += main.cpp\
        kahluaide.cpp \
    luaengine.cpp \
    outputdevice.cpp

HEADERS  += kahluaide.h \
    luaengine.h \
    outputdevice.h

FORMS    += kahluaide.ui \
    outputdevice.ui
