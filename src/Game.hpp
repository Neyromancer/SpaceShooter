#ifndef GAME_HPP
#define GAME_HPP

#include <QObject>
#include <QGraphicsPixmapItem>

class Game : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    Game( QGraphicsItem *parent = 0 );

    void keyPressEvent( QKeyEvent *event );
    void keyReleaseEvent( QKeyEvent *event );
};

#endif // GAME_HPP
