#-------------------------------------------------
#
# Project created by QtCreator 2015-03-16T16:24:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QuixoProjet
TEMPLATE = app


SOURCES += main.cpp\
        mon_jeu.cpp \
    piece.cpp

HEADERS  += mon_jeu.h \
    piece.h

FORMS    += mon_jeu.ui

RESOURCES += \
    ressources.qrc
