#include "Screen.hpp"
#include "UIUserShip.hpp"

#include <QBrush>
#include <QImage>
#include <QGraphicsScene>

Screen::Screen( QWidget *parent ) {
    scene = new QGraphicsScene();
    scene->setSceneRect( 0, 0, 480, 640 );
    setBackgroundBrush( QBrush ( QImage(":/texture/Background/background03.png") ) );

    // set window
    setScene( scene );
    setHorizontalScrollBarPolicy( Qt::ScrollBarAlwaysOff );
    setVerticalScrollBarPolicy( Qt::ScrollBarAlwaysOff );
    setFixedSize( 480, 640 );

    // set player
    user = new UIUserShip( ":/texture/Mobs/User/Animation/1.png" );
    user->setPos( width() / 2, height() - user->getObject().rect().height() - 10 );
    user->setFlag( QGraphicsItem::ItemIsFocusable );
    user->setFocus();
    scene->addItem( user );

    // set particles
    particle = new UISpaceParticle( ":/texture/Effects/Particles/ball-lightning.png" );
    particle->setPos( 100, 10 );
    scene->addItem( particle );

}

void Screen::createBackGroundParticles() {
//    SpaceParticles *particle = new SpaceParticles( 100, 25, 50, 0, 2, 2 );
//    scene->addItem( particle );
}
