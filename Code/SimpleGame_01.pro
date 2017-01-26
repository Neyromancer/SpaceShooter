#-------------------------------------------------
#
# Project created by QtCreator 2017-01-22T07:11:55
#
#-------------------------------------------------

QT       += core gui \
            multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SimpleGame_01
TEMPLATE = app


SOURCES += main.cpp \
    myrect.cpp \
    bullet.cpp \
    enemy.cpp \
    game.cpp \
    score.cpp \
    health.cpp

HEADERS  += \
    myrect.hpp \
    bullet.hpp \
    enemy.hpp \
    game.hpp \
    score.hpp \
    health.hpp

RESOURCES += \
    res.qrc
