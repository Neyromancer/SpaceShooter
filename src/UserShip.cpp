#include "UserShip.hpp"
#include "SpaceObject.hpp"

#include <QDebug>
#include <string>

UserShip::UserShip( int hp, int spd, int x, int y, const string & /* = nullptr */ )
    : SpaceObject( hp, spd, x, y, url ),
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

int UserShip::moveRight( const int rightBorder ) {
    SpaceObject::moveRight( rightBorder );
}

int UserShip::moveLeft( const int leftBorder ) {
    SpaceObject::moveLeft( leftBorder );
}

int UserShip::moveUp( const int topBorder ) {
    SpaceObject::moveUp( topBorder );
}

int UserShip::moveDown( const int bottomBorder ) {
    SpaceObject::moveDown( bottomBorder );
}

// frc - strike force will depend on the power of the bullet used. Define how to build this.
void UserShip::changeHealth( int frc ) {
    SpaceObject::setHealth( SpaceObject::getHealth() - frc );
}
