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
    ./controller/client_engine_connection_setter/client_engine_connection_setter.cpp \
    ./controller/signin_processor/signin_processor.cpp \
    ./controller/signup_processor/signup_processor.cpp \
    ./utils/utils.cpp \
    ./controller/engine/engine.cpp \
    /home/dmitry/workspace/git/socket_communication/src/tcp_connection/tcp_connection.cpp \
    /home/dmitry/workspace/git/socket_communication/src/connection/connection.cpp \
    /home/dmitry/workspace/git/socket_communication/src/socket/socket.cpp \
    controller/space_object/space_object.cpp


HEADERS  += \
    ./controller/client_engine_connection_setter/client_engine_connection_setter.h \
    ./controller/engine/engine.h \
    ./controller/signin_processor/signin_processor.h \
    ./controller/signup_processor/signup_processor.h \
    ./utils/utils.h \
    /home/dmitry/workspace/git/socket_communication/src/tcp_connection/tcp_connection.h \
    /home/dmitry/workspace/git/socket_communication/src/connection/connection.h \
    /home/dmitry/workspace/git/socket_communication/src/socket/socket.h \
    controller/user_ship/user_ship.h \
    controller/space_object/space_object.h


RESOURCES += \
    ../../gui_qml.qrc


