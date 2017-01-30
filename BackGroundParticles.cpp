#include "BackGroundParticles.hpp"
#include "Game.hpp"

#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include <QDebug>

extern Game *game;

BackGroundParticles::BackGroundParticles(QGraphicsItem *parent) {
    // set random number
    int randomNumber = 10 + rand() % 790;

    // set random positions
    setPos( randomNumber, 0 );
    setScale( 0.05 );
    setPixmap( QPixmap( ":/texture/Effects/Particles/ball-lightning.png" ) );

    QTimer *timer = new QTimer( this );
    connect( timer, SIGNAL( timeout() ), this, SLOT( move() ) );
    timer->start( 10 );
}

void BackGroundParticles::move() {
    // move particles down
    setPos( x(), y() + 20 );
    if ( pos().y() > 600 ) {

        scene()->removeItem( this );
        delete this;
    }
}
