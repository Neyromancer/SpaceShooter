#include "SpaceShip.hpp"
#include "Bullet.hpp"
// #include "Enemy.hpp"

#include <QDebug>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QDebug>
#include <QKeyEvent>

SpaceShip::SpaceShip(QGraphicsItem *parent) : QGraphicsPixmapItem ( parent ) {
    setPixmap( QPixmap( ":/texture/Mobs/User/Blue_spaceship_blue_animation_1.png" ) );
    setScale( 0.5 );

}

void SpaceShip::keyPressEvent( QKeyEvent *event ) {
    if ( event->key() == Qt::Key_Left ) {
        setPixmap( QPixmap( ":/texture/Mobs/User/Left2.png" ) );
        if ( pos().x() > 0 )
            setPos( ( x() - 10 ), y() );

       // qDebug() << "You pressed: " + Qt::Key_Left;
    } else if ( event->key() == Qt::Key_Right ) {
        setPixmap( QPixmap( ":/texture/Mobs/User/Right2.png" ) );
//        setScale( 0.15 );
        if ( ( pos().x() + 50 ) < 800 )
            setPos( ( x() + 10 ), y() );
       // qDebug() << "You pressed: " + Qt::Key_Right;
    } else if ( event->key() == Qt::Key_Up ) {
        setPixmap( QPixmap( ":/texture/Mobs/User/Up2.png" ) );
//        setScale( 0.5 );
        if ( ( pos().y() > 0 ) )
            setPos( x(), ( y() - 10 ) );
       // qDebug() << "You pressed: " + Qt::Key_Up;
    } else if ( event->key() == Qt::Key_Down ) {
        setPixmap( QPixmap( ":/texture/Mobs/User/Down2.png" ) );
        if ( ( pos().y() + 50 ) < 600 )
            setPos( x(), ( y() + 10 ) );
       // qDebug() << "You pressed: " + Qt::Key_Down;
    }
    if ( event->key() == Qt::Key_Space )
        fire();

}

void SpaceShip::fire() {
    Bullet *bullet1 = new Bullet();
    bullet1->setPos( x() + 15, y() );

    Bullet *bullet2 = new Bullet();
    bullet2->setPos( x() + 32, y() );

    scene()->addItem( bullet1 );
    scene()->addItem( bullet2 );
}


