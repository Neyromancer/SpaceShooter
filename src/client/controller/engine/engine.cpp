/// \file client.cpp
/// \brief
/// \author
/// \date 21.11.2018

#include "engine.h"

extern "C" {
#include <sys/types.h>
#include <sys/socket.h>
}

#include <QMetaMethod>
#include <QMetaObject>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQuickItem>
#include <QQuickView>
#include <QVector>
#include <QString>

#include <chrono>
#include <iostream>
#include <thread>

#include "/home/dmitry/workspace/git/socket_communication/src/tcp_connection/tcp_connection.h"
#include "/home/dmitry/workspace/git/socket_communication/src/connection/connection.h"

namespace space_shooter {
namespace client {

Engine::Engine(QObject *object)
    : QObject(object) {}

// this data serialization looks ugly, rewrite it.
void Engine::signInSendWrapper(QString name, QString password) {
    QString res {};
    res += "c0";
    res += "|u" + name;
    res += "|p" + password;
    sendUserInfo(res);
}

// this data serialization looks ugly, rewrite it.
void Engine::signUpSendWrapper(QString name, QString password, QString email,
                               QString login) {
    QString res {};
    res += "c0";
    res += "|u" + name;
    res += "|p" + password;
    res += "|e" + email;
    res += "|l" + login;
    sendUserInfo(res);
}

void Engine::sendUserInfo(const QString &vc) {
    client_engine_setter_.ParseConfigureFile();
    socket_communication::TcpConnection tcp_connect{};
    tcp_connect.SetSocket(AF_INET, SOCK_STREAM, 0);
    tcp_connect.SetIp(client_engine_setter_.GetIpAddress());
    tcp_connect.SetPort(client_engine_setter_.GetPort());
    if (tcp_connect.Connect()) {
        std::cout << "connected" << std::endl;
//        auto i = 0;
//        do {
            std::cout << "sending..." << std::endl;
//            std::this_thread::sleep_for(std::chrono::seconds(1));
        if (tcp_connect.Send(vc.toStdString())) {
             std::cout << vc.toStdString() << " sent" << std::endl;
//                vc.pop_front();
//                ++i;
        }
//        } while (i < vc.size());
    } else {
        std::cout << "Couldn't connect to a socket "
                  << tcp_connect.GetSocket().GetSocket() << std::endl;
    }

}

}   // namespace client
}   // namespace space_shooter
