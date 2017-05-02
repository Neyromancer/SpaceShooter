#include "Screen.hpp"

#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Screen *screen = new Screen();
    screen->show();

    return a.exec();
}
