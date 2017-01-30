#include "Bullet.hpp"
#include "Game.hpp"

#include <QTimer>
#include <QPixmap>
#include <QGraphicsScene>

extern Game *gema;

Bullet::Bullet( QGraphicsItem *parent ) {
    setPixmap( QPixmap( ":/texture/Weapons/LaserBeam01.png" ) );
    setScale( 0.25 );
    QTimer *move_timer = new QTimer( this );
    connect( move_timer, SIGNAL( timeout() ), this, SLOT( move() ) );
    move_timer->start( 50 );

}

void Bullet::move() {
    setPos( x(), y() - 30 );
    if ( pos().y() < 0 ) {
        scene()->removeItem( this );
        delete this;
    }
}
