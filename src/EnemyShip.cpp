#include "SpaceObject.hpp"
#include "EnemyShip.hpp"

#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <stdlib.h>

EnemyShip::EnemyShip( int hp, int spd, int x, int y, const string &url /* = nullptr */ )
    : SpaceObject( hp, spd, url, x, y, url ) {
    // empty body
}

// should recieve bottom border ( coord sys starts in top-left corner and y coord directs down)
int EnemyShip::moveDown( int screenHeight ) {
    setCoordY( getCoordY() + getSpeed() );
    if ( getCoordY() < screenHeight )
        return -1;

    return 0;
}

// should recieve top border ( coord sys starts in top-left corner and y coord directs down)
int EnemyShip::moveUp( int screenHeight ) {
    setCoordY( getCoordY() + getSpeed() );
    if ( getCoordY() > screenHeight )
        return -1;

    return 0;
}

// should recieve right border ( coord sys starts in top-left corner and x coord directs to the right )
int EnemyShip::moveRight( int screenWidth ) {
    setCoordX( getCoordX() + getSpeed() );
    if ( getCoordY() > screenWidth )
        return -1;

    return 0;
}

// should recieve left border ( coord sys starts in top-left corner and x coord directs to the right )
int EnemyShip::moveLeft( int screenWidth ) {
    setCoordX( getCoordX() + getSpeed() );
    if ( getCoordY() < screenWidth )
        return -1;

    return 0;
}

// frc - strike force will depend on the power of the bullet used. Define how to build this.
void EnemyShip::changeHealth( int frc ) {
    // can change later
    SpaceObject::setHealth( SpaceObject::getHealth() - frc );
}

EnemyShip::~EnemyShip() {

}
