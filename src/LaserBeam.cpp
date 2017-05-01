#include "LaserBeam.hpp"
#include "SpaceObject.hpp"

LaserBeam::LaserBeam( unsigned int hp, unsigned int spd, unsigned int x, unsigned int y, unsigned int l, unsigned int w/*, const string &url = nullptr */ )
    : SpaceObject( hp, spd, x, y, l, w ) {

}

void LaserBeam::changeHealth( unsigned int frc = 0 ) {
    SpaceObject::setHealth( SpaceObject::getHealth() - frc );
}

// should recieve bottom border ( coord sys starts in top-left corner and y coord directs down)
int LaserBeam::moveDown( const int downBorder ) {
    SpaceObject::setCoordY( SpaceObject::getCoordY() + SpaceObject::getSpeed() );
    if ( SpaceObject::getCoordY() < downBorder )
        return -1;

    return 0;
}

// should recieve top border ( coord sys starts in top-left corner and y coord directs down)
int LaserBeam::moveUp( const int topBorder ) {
    SpaceObject::setCoordY( SpaceObject::getCoordY() + SpaceObject::getSpeed() );
    if ( SpaceObject::getCoordY() > topBorder )
        return -1;

    return 0;
}

// should recieve right border ( coord sys starts in top-left corner and x coord directs to the right )
int LaserBeam::moveRight( const int rightBorder ) {
    SpaceObject::setCoordX( SpaceObject::getCoordX() + SpaceObject::getSpeed() );
    if ( SpaceObject::getCoordY() > rightBorder )
        return -1;

    return 0;
}

// should recieve left border ( coord sys starts in top-left corner and x coord directs to the right )
int LaserBeam::moveLeft( const int leftBorder ) {
    SpaceObject::setCoordX( SpaceObject::getCoordX() + SpaceObject::getSpeed() );
    if ( SpaceObject::getCoordY() < leftBorder )
        return -1;

    return 0;
}

LaserBeam::~LaserBeam(){

}
