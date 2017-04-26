#include "SpaceObject.hpp"
#include "EnemyShip.hpp"

#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <stdlib.h>

EnemyShip::EnemyShip( int hp, int spd, int x, int y, const string &url /* = nullptr */ )
    : SpaceObject( hp, spd, x, y, url ) {
    // empty body
}

// should recieve bottom border ( coord sys starts in top-left corner and y coord directs down)
int EnemyShip::moveDown( const int downBorder ) {
    SpaceObject::setCoordY( SpaceObject::getCoordY() + SpaceObject::getSpeed() );
    if ( SpaceObject::getCoordY() < downBorder )
        return -1;

    return 0;
}

// should recieve top border ( coord sys starts in top-left corner and y coord directs down)
int EnemyShip::moveUp( const int topBorder ) {
    SpaceObject::setCoordY( SpaceObject::getCoordY() + SpaceObject::getSpeed() );
    if ( SpaceObject::getCoordY() > topBorder )
        return -1;

    return 0;
}

// should recieve right border ( coord sys starts in top-left corner and x coord directs to the right )
int EnemyShip::moveRight( const int rightBorder ) {
    SpaceObject::setCoordX( SpaceObject::getCoordX() + SpaceObject::getSpeed() );
    if ( SpaceObject::getCoordY() > rightBorder )
        return -1;

    return 0;
}

// should recieve left border ( coord sys starts in top-left corner and x coord directs to the right )
int EnemyShip::moveLeft( const int leftBorder ) {
    SpaceObject::setCoordX( SpaceObject::getCoordX() + SpaceObject::getSpeed() );
    if ( SpaceObject::getCoordY() < leftBorder )
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
