#include <QtQml/QQmlContext>
#include <QtQuick/QQuickView>
#include <QGuiApplication>


int main(int argc, char **argv) {
    QGuiApplication app(argc, argv);
    QQuickView viewer{};
    viewer.setSource(QUrl(QLatin1String("./login_screen.qml")));
    viewer.show();


    return app.exec();
}
