#include "enemy.hpp"
#include "game.hpp"

#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h> // include rand() function
#include <QDebug>

extern Game *game;

Enemy::Enemy( QGraphicsItem *parent ) : QObject(), QGraphicsPixmapItem( parent ) {
    // set random number
    int random_number = 10 + rand() % 690;

    // set random position
    setPos( random_number, 0 );
//    setTransformationOrigin( 50, 50 );
//    setRotation( 180 );
    setScale( 0.5 );
    // drew rect
    setPixmap( QPixmap( "/home/dmitry/workspace/university/programming/firstSemester/cpp/qtcreator/GameTutorial/22_01_2017/SimpleGame_01/Red_spaceship_enemy_red.png" ));

    // connect
    QTimer *timer = new QTimer( this );
    connect( timer, SIGNAL( timeout() ), this, SLOT( move() ) );

    timer->start( 50 );
}

void Enemy::move() {
    // move enemy down
    setPos( x(), y() + 5 );
    if ( pos().y() > 600 ) {

        // decrease the health
        game->health->decrease();

        scene()->removeItem( this );
        delete this;
    }
}
