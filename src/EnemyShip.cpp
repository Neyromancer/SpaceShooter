#include "SpaceObject.hpp"
#include "EnemyShip.hpp"

#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <stdlib.h>

EnemyShip::EnemyShip( unsigned int hp, unsigned int spd, unsigned int x, unsigned int y, unsigned int l, unsigned int w, unsigned int b )
    : SpaceObject( hp, spd, x, y, l, w ),
      bulletCharge( b ) {
    // empty body
}

void EnemyShip::setScore( unsigned int scor ) {
    if ( scor > 0 )
        score = scor;
    else score = 0;
}

unsigned int EnemyShip::getScore() const {
    return score;
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
void EnemyShip::changeHealth( unsigned int frc ) {
    // can change later
    SpaceObject::setHealth( SpaceObject::getHealth() - frc );
}

EnemyShip::~EnemyShip() {

}
