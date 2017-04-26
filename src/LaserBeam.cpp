#include "LaserBeam.hpp"
#include "SpaceObject.hpp"

LaserBeam::LaserBeam( int hp, int spd, int x, int y, const string &url /* = nullptr */ )
    : SpaceObject( hp, spd, x, y, url ) {

}

void LaserBeam::changeHealth( int frc = 0 ) {
    SpaceObject::setHealth( SpaceObject::getHealth() - frc );
}


LaserBeam::~LaserBeam(){

}
