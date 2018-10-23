#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QObject>
#include <QString>
#include <QMetaObject>
#include <QMetaMethod>
#include <QQuickView>
#include <QQuickItem>
#include <QQmlContext>

#include "login_processor.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    MyClass my_class;
    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("backend", &my_class);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

//    QObject *item = qobject_cast<QObject *>(engine.rootObjects()[0]);
//    const QMetaObject *metaObject = item->metaObject();
//    for (auto i = 0; i < metaObject->methodCount(); ++i) {
//        QMetaMethod method = metaObject->method(i);
//        qDebug() << method.methodSignature();
//    }

    return app.exec();
}

