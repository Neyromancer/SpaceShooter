#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QObject>
#include <QString>
#include <QMetaObject>
#include <QMetaMethod>
#include <QQuickView>
#include <QQuickItem>
#include <QQmlContext>

#include "./controller/signin_processor/signin_processor.h"
#include "./controller/signup_processor/signup_processor.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    space_shooter::client::LoginProcessor login_processor;
    space_shooter::client::SignupProcessor signup_processor;
//    qmlRegisterType<space_shooter::client::LoginProcessor>("io.qt."
//                                                           "client.backend",
//                                                           1, 0, "space_shooter::"
//                                                           "client::LoginProcessor");
    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("backend", &login_processor);
    engine.load(QUrl(QStringLiteral("qrc:/src/client/view/login_processor/"
                                    "LogInterface.qml")));
    engine.addPluginPath(QString("./view/login_processor/"));
    engine.rootContext()->setContextProperty("signup", &signup_processor);
    engine.load(QUrl(QStringLiteral("qrc:/src/client/view/signup_processor/"
                                    "SignUpInterface.qml")));
    engine.addPluginPath(QString("./view/signup_processor/"));



//    qDebug() << login_processor.getUserName();
//    qDebug() << login_processor.getPassword();

    return app.exec();
}

