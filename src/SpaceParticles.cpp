#include "SpaceParticles.hpp"
#include "SpaceObject.hpp"

SpaceParticles::SpaceParticles( int hp, int spd, int x, int y, int l, int w/*, const string &url = nullptr */ )
    : SpaceObject( hp, spd, x, y, l, w ) {
    // empty body
}

int SpaceParticles::moveDown( const int bottomBorder ) {
    SpaceObject::moveDown( bottomBorder );
}

void SpaceParticles::changeHealth( unsigned int frc = 0 ) {
    SpaceObject::setHealth( SpaceObject::getHealth() - frc );
}

SpaceParticles::~SpaceParticles() {

}
