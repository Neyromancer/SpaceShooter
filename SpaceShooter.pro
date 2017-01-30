#-------------------------------------------------
#
# Project created by QtCreator 2017-01-29T17:12:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SpaceShooter
TEMPLATE = app


SOURCES += main.cpp\
        Game.cpp \
    SpaceShip.cpp \
    Score.cpp \
    Health.cpp \
    BackGroundParticles.cpp \
    Bullet.cpp

HEADERS  += Game.hpp \
    SpaceShip.hpp \
    Score.hpp \
    Health.hpp \
    BackGroundParticles.hpp \
    Bullet.hpp

RESOURCES += \
    ../../res/rcs.qrc
