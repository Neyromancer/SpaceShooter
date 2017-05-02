#ifndef GAME_HPP
#define GAME_HPP

#include "Screen.hpp"

#include <QObject>
#include <QGraphicsPixmapItem>

class Game : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    Game( QGraphicsItem *parent = 0 );
    ~Game();

    void keyPressEvent( QKeyEvent *event );
    void keyReleaseEvent( QKeyEvent *event );

    Screen *screen;
    bool isOver;
};

#endif // GAME_HPP
