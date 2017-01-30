#ifndef SPACESHIP_HPP
#define SPACESHIP_HPP

#include <QGraphicsPixmapItem>
#include <QObject>

class SpaceShip : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT

public:
    SpaceShip( QGraphicsItem *parent = 0 );
    void keyPressEvent( QKeyEvent *event );
    void fire();
};

#endif // SPACESHIP_HPP
