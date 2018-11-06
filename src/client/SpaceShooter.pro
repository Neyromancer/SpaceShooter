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
    controller/signup_processor/signup_processor.cpp \
    controller/login_processor/login_processor.cpp \
    utils/utils.cpp


HEADERS  += \
    controller/login_processor/login_processor.h \
    controller/signup_processor/signup_processor.h \
    utils/utils.h


RESOURCES += \
    ../../gui_qml.qrc


