#include "Game.hpp"
#include "SpaceParticles.hpp"
#include "UISpaceParticle.hpp"
#include "SpaceObject.hpp"
#include "UserShip.hpp"
#include "UIUserShip.hpp"
#include "Screen.hpp"

#include <typeinfo>
#include <stdlib.h>
#include <QTimer>
#include <QDebug>
#include <QGraphicsItem>
#include <QKeyEvent>

Game::Game( QGraphicsItem *parent )
    : QObject(), QGraphicsPixmapItem( parent ) {
    isOver = false;

    int count = 100;
    SpaceParticles *particle = new SpaceParticles( 100, 0, 150, 0, 2, 2 );
    UISpaceParticle *uiParticle = new UISpaceParticle( ":/texture/Mobs/User/Animation/1.png");
    UserShip *usrShip = new UserShip( 100, 0, 150, 300, 2, 2 );
    UIUserShip *uiUserShip = new UIUserShip( ":/texture/Mobs/User/Animation/1.png" );
    screen = new Screen( uiParticle );
    while( !isOver ) {
        qDebug() << "x: " << particle->getCoordX() << "y: " << particle->getCoordY();
        particle->moveUp();
        qDebug() << "x: " << particle->getCoordX() << "y: " << particle->getCoordY();
        uiParticle->setPos( particle->getCoordX(), particle->getCoordY() );
        uiUserShip->setPos( usrShip->getCoordX(), usrShip->getCoordY() );
        screen->loadItem( uiParticle );
        screen->loadItem( uiUserShip );
        if ( particle->getCoordY()  >= 640 || count < 0 )
            isOver = true;

        --count;
    }
}

void Game::keyPressEvent(QKeyEvent *event) {

}

void Game::keyReleaseEvent(QKeyEvent *event) {

}

Game::~Game() {

}
