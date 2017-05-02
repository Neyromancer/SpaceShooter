#include "SpaceObject.hpp"

SpaceObject::SpaceObject( unsigned int hp, unsigned int spd, unsigned int x, unsigned int y, unsigned int l, unsigned int w )
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

unsigned int SpaceObject::getHealth() const {
    return health;
}

void SpaceObject::setSpeed( int spd ) {
        speed = spd;
}

int SpaceObject::getSpeed() const {
    return speed;
}

void SpaceObject::setCoordX( unsigned int x ) {
    coordX = x;
}

unsigned int SpaceObject::getCoordX() const {
    return coordX;
}

void SpaceObject::setCoordY( unsigned int y ) {
    coordY = y;
}

unsigned int SpaceObject::getCoordY() const {
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

void SpaceObject::setLength( unsigned int l ) {
    if ( l >= 1 )
        length = l;
    else length = 1;
}
unsigned int SpaceObject::getLength() const {
    return length;
}


// ( coord sys starts in top-left corner and y coord directs down)
void SpaceObject::moveDown() {
    setCoordY( getCoordY() + getSpeed() );
}

// ( coord sys starts in top-left corner and y coord directs down)
void SpaceObject::moveUp() {
    setCoordY( getCoordY() + getSpeed() );
}

// ( coord sys starts in top-left corner and y coord directs down)
void SpaceObject::moveRight() {
    setCoordX( getCoordX() + getSpeed() );
}

// ( coord sys starts in top-left corner and y coord directs down)
void SpaceObject::moveLeft() {
    setCoordX( getCoordX() + getSpeed() );
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
