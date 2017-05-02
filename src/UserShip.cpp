#include "UserShip.hpp"
#include "SpaceObject.hpp"

#include <QDebug>
#include <string>

UserShip::UserShip( unsigned int hp, unsigned int spd, unsigned int x, unsigned int y, unsigned int l, unsigned int w, unsigned int b )
    : SpaceObject( hp, spd, x, y, l, w ),
      score( 0 ), bulletCharge( b ) {
    // empty body
}

void UserShip::setScore( unsigned int scor ) {
    if ( scor > 0 )
        score = scor;
    else score = 0;
}

unsigned int UserShip::getScore() const {
    return score;
}

void UserShip::setBulletCharge( unsigned int bullet ) {
    if ( bullet > 0 )
        bulletCharge = bullet;
    else bulletCharge = 0;
}
unsigned int UserShip::getBulletCharge() const {
    return bulletCharge;
}

// frc - strike force will depend on the power of the bullet used. Define how to build this.
void UserShip::changeHealth( unsigned int frc ) {
    SpaceObject::setHealth( SpaceObject::getHealth() - frc );
}

 UserShip::~UserShip() {

 }
