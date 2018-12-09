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
#include "./controller/engine/engine.h"
//#include "./controller/engine/engine.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
//    space_shooter::client::Engine *client_engine = new space_shooter::client::Engine();
//    client_engine->displayInitialUI();
    space_shooter::client::SigninProcessor signin_processor;
    space_shooter::client::SignupProcessor signup_processor;
    space_shooter::client::Engine client_engine;
    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("backend",
                                             &signin_processor);
    engine.rootContext()->setContextProperty("signup",
                                             &signup_processor);
    engine.load(QUrl(QStringLiteral("qrc:/src/client/view/signin_processor/"
                                    "SigninInterface.qml")));
    engine.addPluginPath(QString("./view/signin_processor/"));
    engine.load(QUrl(QStringLiteral("qrc:/src/client/view/signup_processor/"
                                    "SignUpInterface.qml")));
    engine.addPluginPath(QString("./view/signup_processor/"));

    QObject::connect(&signin_processor,
                     &space_shooter::client::SigninProcessor::validPasswordUserBlock,
                     &client_engine,
                     &space_shooter::client::Engine::displayInitialUI);

    return app.exec();
}

