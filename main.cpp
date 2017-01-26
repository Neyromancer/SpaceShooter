#include "game.hpp"

#include <QApplication>
/*
Tutorial Topics First:
    - QGraphicsScene
    - QGraphicsItem (QGraphicsRectItem)
    - QGraphicsView
Tutorial Topics Second:
    - events ( keyPressEvent() and QKeyEvent )
    - event propogation system
    - QDebug
Tutorial Topics Third:
    - QTimer
    - signals and slots ( connect function )
    - QObject and Q_Object macro

Tutorial Topics Fourth:
    - QGraphicsScene's sceneRect
    - QGraphicsView's sceneRect
    - QGraphicView coordinates vs QGraphicScene coordinates vs QGraphicItem coordinates
Tutorial Topics Fifth:
    - collidingItems() <- new topics
    - QTimer and coordinate systems <- old topics (review)

Tutorial Topics Sixth:
    - parents
    - QGraphicsTextItem, setPlainText(), setFont(), setDefaultTextColor()
Tutorial Topics Seventh
    - resource files
    - QMediaPlayer, setMedia(), QUrl, play()
Tutorial Topics Eith:
    - QGraphicsPixmapItem, QPixmap, QImage
*/

Game *game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    game = new Game();
    game->show();


    return a.exec();
}
