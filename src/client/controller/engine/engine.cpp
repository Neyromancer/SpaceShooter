/// \file client.cpp
/// \brief
/// \author
/// \date 21.11.2018

#include "engine.h"

#include <QMetaMethod>
#include <QMetaObject>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQuickItem>
#include <QQuickView>
#include <QString>

#include <iostream>

namespace space_shooter {
namespace client {

Engine::Engine(QObject *object)
    : QObject(object) /*signin_processor_{}, signup_processor_{}*/ {}

void Engine::displayInitialUI(QString name, QString password) {
//    QQmlApplicationEngine engine;
//    engine.rootContext()->setContextProperty("backend",
//                                             &(getSigninProcessor()));
//    engine.load(QUrl(QStringLiteral("qrc:/src/client/view/signin_processor/"
//                                    "SigninInterface.qml")));


//    QQmlApplicationEngine engine;
//    engine.rootContext()->setContextProperty("backend", &signin_processor_);
//    engine.load(QUrl(QStringLiteral("qrc:/src/client/view/signin_processor/"
//                                    "SigninInterface.qml")));
//    engine.addPluginPath(QString("./view/signin_processor/"));

//    engine.rootContext()->setContextProperty("signup", &signup_processor_);
//    engine.load(QUrl(QStringLiteral("qrc:/src/client/view/signup_processor/"
//                                    "SignUpInterface.qml")));
//    engine.addPluginPath(QString("./view/signup_processor/"));
    std::cout << "name: " << name.toStdString() << std::endl;
    std::cout << "password: " << password.toStdString() << std::endl;
}

}   // namespace client
}   // namespace space_shooter
