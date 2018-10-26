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
    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("backend", &login_processor);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    engine.addPluginPath(QString("./view/login_processor/"));

    return app.exec();
}

