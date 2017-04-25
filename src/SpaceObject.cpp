#include "SpaceObject.hpp"
#include <string>

SpaceObject::SpaceObject( int hp, int spd, int x, int y, const string &url /* = nullptr */ )
    : health( hp ),
      speed( spd ),
      coordX( x ),
      coordY( y ) {
    // empty body
}

void SpaceObject::setHealth( const int hp ) {
    if ( hp > 0 )
        health = hp;
    else
        health = 0;
}

int SpaceObject::getHealth() const {
    return health;
}

void SpaceObject::setSpeed( const int spd ) {
    if ( spd > 0 )
        speed = spd;
    else
        speed = 0;
}

int SpaceObject::getSpeed() const {
    return speed;
}

void SpaceObject::setCoordX( int x ) {
    coordX = x;
}

int SpaceObject::getCoordX() const {
    return coordX;
}

void SpaceObject::setCoordY( int y ) {
    coordY = y;
}

int SpaceObject::getCoordY() const {
    return coordY;
}

void setPicPath( const string &url ) {
    picPath = url;
}

string &getPicPath() const {
    return picPath;
}

// should recieve bottom border ( coord sys starts in top-left corner and y coord directs down)
int SpaceObject::moveDown( int screenHeight ) {
    if ( getCoordY() > screenHeight )
        setCoordY( getCoordY() + getSpeed() );

    return 0;
}

// should recieve top border ( coord sys starts in top-left corner and y coord directs down)
int SpaceObject::moveUp( int screenHeight ) {
    if ( getCoordY() < screenHeight )
        setCoordY( getCoordY() + getSpeed() );

    return 0;
}

// should recieve right border ( coord sys starts in top-left corner and y coord directs down)
int SpaceObject::moveRight( int screenWidth ) {
    if ( getCoordY() < screenWidth )
        setCoordX( getCoordX() + getSpeed() );

    return 0;
}

// should recieve left border
int SpaceObject::moveLeft( int screenWidth ) {
    if ( getCoordY() > screenWidth )
        setCoordX( getCoordX() + getSpeed() );

    return 0;
}

/* move to graphic representation class
void SpaceObject::draw( const string &url, int randomNum ) {
    int randomNumber = 1 + ( rand() % randomNum );
    QString pic = url + QString::number( randomNumber ) + ".png";
    object.load( pic );
    setPixmap( object );
}
*/

SpaceObject::~SpaceObject() {

}
