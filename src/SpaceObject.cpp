#include "SpaceObject.hpp"
#include <string>

SpaceObject::SpaceObject( unsigned int hp, unsigned int spd, unsigned int x, unsigned int y, unsigned int l, unsigned int w/*, const string &url = nullptr */ )
    : health( hp ),
      speed( spd ),
      coordX( x ),
      coordY( y ) {
    // empty body
}

void SpaceObject::setHealth( const unsigned int hp ) {
    if ( hp > 0 )
        health = hp;
    else
        health = 0;
}

int SpaceObject::getHealth() const {
    return health;
}

void SpaceObject::setSpeed( const unsigned int spd ) {
    if ( spd > 0 )
        speed = spd;
    else
        speed = 0;
}

int SpaceObject::getSpeed() const {
    return speed;
}

void SpaceObject::setCoordX( unsigned int x ) {
    coordX = x;
}

int SpaceObject::getCoordX() const {
    return coordX;
}

void SpaceObject::setCoordY( unsigned int y ) {
    coordY = y;
}

int SpaceObject::getCoordY() const {
    return coordY;
}

void SpaceObject::setWidth( unsigned int w ) {
    if ( w >= 1 )
        width = w;
    else width = 1;
}
unsigned int SpaceObject::getWidth() const {
    return width;
}

void SpaceObject::setHeight( unsigned int l ) {
    if ( l >= 1 )
        length = l;
    else length = 1;
}
unsigned int SpaceObject::getHeight() const;

void setPicPath( const string &url ) {
    picPath = url;
}

string &getPicPath() const {
    return picPath;
}

// should recieve bottom border ( coord sys starts in top-left corner and y coord directs down)
int SpaceObject::moveDown( const int bottomBorder ) {
    if ( getCoordY() > bottomBorder )
        setCoordY( getCoordY() + getSpeed() );

    return 0;
}

// should recieve top border ( coord sys starts in top-left corner and y coord directs down)
int SpaceObject::moveUp( const int topBorder ) {
    if ( getCoordY() < topBorder )
        setCoordY( getCoordY() + getSpeed() );

    return 0;
}

// should recieve right border ( coord sys starts in top-left corner and y coord directs down)
int SpaceObject::moveRight( const int rightBorder ) {
    if ( getCoordY() < rightBorder )
        setCoordX( getCoordX() + getSpeed() );

    return 0;
}

// should recieve left border
int SpaceObject::moveLeft( const int leftBorder ) {
    if ( getCoordY() > leftBorder )
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
