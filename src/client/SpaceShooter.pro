#-------------------------------------------------
#
# Project created by QtCreator 2017-04-24T21:40:12
#
#-------------------------------------------------

QT += core gui
QT += qml quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SpaceShooter
TEMPLATE = app


SOURCES += main.cpp\
    controller/signin_processor/signin_processor.cpp \
    controller/signup_processor/signup_processor.cpp \
    utils/utils.cpp \
#    controller/client/engine.cpp


HEADERS  += \
    controller/signin_processor/signin_processor.h \
    controller/signup_processor/signup_processor.h \
    utils/utils.h \
#    controller/client/engine.h


RESOURCES += \
    ../../gui_qml.qrc


