#include "bullet.hpp"
#include "enemy.hpp"
#include "game.hpp"

#include <QTimer>
#include <QPixmap>
#include <QGraphicsScene>
#include <QList>
#include <typeinfo>

extern Game *game;  // there is an extermal global obaject called game

Bullet::Bullet( QGraphicsItem *parent ) : QObject(), QGraphicsPixmapItem( parent ) {
    // draw bullets
    setPixmap( QPixmap( "/home/dmitry/workspace/university/programming/firstSemester/cpp/qtcreator/GameTutorial/22_01_2017/SimpleGame_01/Blue_bullet.png" ) );
    setTransformOriginPoint( 25, 25 );
    setScale( 0.5 );

    // connect
    QTimer *timer = new QTimer();
    connect( timer, SIGNAL( timeout() ), this, SLOT( move() ) );

    timer->start( 50 );
}

void Bullet::move() {
    // if bullet collides with enemy, destroy both
    QList< QGraphicsItem *>colliding_items = collidingItems();
    for ( int i = 0, n = colliding_items.size(); i < n; ++i ) {
        if ( typeid( *( colliding_items[ i ] ) ) == typeid( Enemy ) ) {
            // increase the score
            game->score->increase();

            // remove them both
            scene()->removeItem( colliding_items[ i ] );
            scene()->removeItem( this );

            // delete them both from the memory
            delete colliding_items[ i ];
            delete this;

            return;
        }
    }

    // move bullet up
    setPos( x(), y() - 10 );
    if ( pos().y() < 0 ) {
        scene()->removeItem( this );
        delete this;
    }
}
