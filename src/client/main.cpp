#include "Screen.hpp"
#include "Game.hpp"

#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    Game *game = new Game();


    return a.exec();
}