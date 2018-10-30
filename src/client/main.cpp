#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QObject>
#include <QString>
#include <QMetaObject>
#include <QMetaMethod>
#include <QQuickView>
#include <QQuickItem>
#include <QQmlContext>

#include "./model/login_processor/login_processor.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    space_shooter::client::LoginProcessor login_processor;
//    qmlRegisterType<space_shooter::client::LoginProcessor>("io.qt."
//                                                           "client.backend",
//                                                           1, 0, "space_shooter::"
//                                                           "client::LoginProcessor");
    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("backend", &login_processor);
    engine.load(QUrl(QStringLiteral("qrc:/LogInInterface.qml")));
    engine.addPluginPath(QString("./view/login_processor/"));

//    qDebug() << login_processor.getUserName();
//    qDebug() << login_processor.getPassword();

    return app.exec();
}

