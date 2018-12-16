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

void Engine::sendUserInfo(QString name, QString password) {
    std::cout << "name: " << name.toStdString() << std::endl;
    std::cout << "password: " << password.toStdString() << std::endl;
    client_engine_setter_.ParseConfigureFile();
    socket_communication::TcpConnection tcp_connect{};
    tcp_connect.SetSocket(AF_INET, SOCK_STREAM, 0);
    tcp_connect.SetIp(client_engine_setter_.GetIpAddress());
    tcp_connect.SetPort(client_engine_setter_.GetPort());
    if (tcp_connect.Connect()) {
        std::cout << "connected" << std::endl;
        QVector<QString> vc;
        vc.push_back(name);
        vc.push_back(password);
        while (!vc.isEmpty()) {
            std::cout << "sending..." << std::endl;
            if (tcp_connect.Send(vc.at(0).toStdString())) {
                std::cout << vc.at(0).toStdString() << " sent" << std::endl;
                vc.pop_front();
            }
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }
    std::cout << "Couldn't connect to a socket "
              << tcp_connect.GetSocket().GetSocket() << std::endl;

}

}   // namespace client
}   // namespace space_shooter
