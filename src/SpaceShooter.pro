#-------------------------------------------------
#
# Project created by QtCreator 2017-04-24T21:40:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SpaceShooter
TEMPLATE = app


SOURCES += main.cpp\
        main.cpp \
    Game.cpp \
    SpaceObject.cpp \
    EnemyShip.cpp \
    UserShip.cpp \
    SpaceParticles.cpp \
    LaserBeam.cpp

HEADERS  += \
    SpaceObject.hpp \
    Game.hpp \
    EnemyShip.hpp \
    UserShip.hpp \
    LaserBeam.hpp \
    SpaceParticles.hpp

RESOURCES += \
    ../res/qrc.qrc
