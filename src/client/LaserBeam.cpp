#include "LaserBeam.hpp"
#include "SpaceObject.hpp"

LaserBeam::LaserBeam( unsigned int hp, unsigned int spd, unsigned int x, unsigned int y, unsigned int l, unsigned int w/*, const string &url = nullptr */ )
    : SpaceObject( hp, spd, x, y, l, w ) {

}

void LaserBeam::changeHealth( unsigned int frc ) {
    SpaceObject::setHealth( frc );
}

LaserBeam::~LaserBeam(){

}
