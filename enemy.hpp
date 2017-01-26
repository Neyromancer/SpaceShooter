#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>

class Enemy : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT

public:
    Enemy( QGraphicsItem *parent = 0 );

public slots:
    void move();
};

#endif // ENEMY_HPP
