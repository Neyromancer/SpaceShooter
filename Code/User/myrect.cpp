#include "myrect.hpp"
#include "bullet.hpp"
#include "enemy.hpp"

#include <QDebug>
#include <QKeyEvent>
#include <QGraphicsScene>

// member function that is responsible for key being pressed
MyRect::MyRect(QGraphicsItem *parent) : QGraphicsPixmapItem( parent ) {
    bulletSound = new QMediaPlayer();
    bulletSound->setMedia( QUrl( "qrc:/sounds/Gun+1.wav" ) );

    // create a player
    setPixmap( QPixmap( "/home/dmitry/workspace/university/programming/firstSemester/cpp/qtcreator/GameTutorial/22_01_2017/SimpleGame_01/Blue_spaceship_blue_animation_1.png" ) );
    setScale( 0.5 );
}

void MyRect::keyPressEvent(QKeyEvent *event) {
    if ( event->key() == Qt::Key_Left ) {
        if ( pos().x() > 0 )
            setPos( ( x() - 10 ), y() );
//       qDebug() << "You pressed: " + Qt::Key_Left;
    } else

     if ( event->key() == Qt::Key_Right ) {
         if ( ( pos().x() + 100 ) < 800 )
         setPos( ( x() + 10 ), y() );
//        qDebug() << "You pressed: " + Qt::Key_Right;
    } /* else

    if ( event->key() == Qt::Key_Up ) {
        setPos( x(), ( y() - 10 ) );
//        qDebug() << "You pressed: " + Qt::Key_Up;
    } else

    if ( event->key() == Qt::Key_Down ) {
        setPos( x(), ( y() + 10 ) );
//        qDebug() << "You pressed: " + Qt::Key_Down;
    } */else

    if ( event->key() == Qt::Key_Space ) {
        // Create a bullet
        Bullet *bullet = new Bullet();
        bullet->setPos( x() + 5, y() );
        scene()->addItem( bullet );
/*
        // play bullet sound
        if ( bulletSound->state() == QMediaPlayer::PlayingState ) {
            bulletSound->setPosition( 0 );
        } else if ( bulletSound->state() == QMediaPlayer::StoppedState )
            bulletSound->play();
*/
    }
}

void MyRect::spawn() {
    // create an enemy
    Enemy *enemy = new Enemy();
    scene()->addItem( enemy );

}
