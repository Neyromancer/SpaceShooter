#include "UserShip.hpp"
#include "SpaceObject.hpp"

#include <QDebug>
#include <string>

UserShip::UserShip( int hp, int spd, int x, int y, const string & /* = nullptr */ )
    : SpaceObject( hp, spd, url, x, y, url ),
      score( 0 ) {
    // empty body
}

void UserShip::setScore( int scor ) {
    if ( scor > 0 )
        score = scor;
}

int UserShip::getScore() const {
    return score;
}

int UserShip::moveRight( int screenWidth ) {
    SpaceObject::moveRight( screenWidth );
}

int UserShip::moveLeft( int screenWidth ) {
    SpaceObject::moveLeft( screenWidth );
}

int UserShip::moveUp( int screenHeight ) {
    SpaceObject::moveUp( screenHeight );
}

int UserShip::moveDown( int screenHeight ) {
    SpaceObject::moveDown( screenHeight );
}

// frc - strike force will depend on the power of the bullet used. Define how to build this.
void UserShip::changeHealth( int frc ) {
    SpaceObject::setHealth( SpaceObject::getHealth() - frc );
}
