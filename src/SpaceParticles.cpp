#include "SpaceParticles.hpp"
#include "SpaceObject.hpp"

SpaceParticles::SpaceParticles( int hp, int spd, int x, int y, const string &url /* = nullptr */ )
    : SpaceObject( hp, spd, x, y, url ) {
    // empty body
}

int SpaceParticles::moveDown( const int bottomBorder ) {
    SpaceObject::moveDown( bottomBorder );
}

void SpaceParticles::changeHealth( int frc = 0 ) {
    SpaceObject::setHealth( SpaceObject::getHealth() - frc );
}

SpaceParticles::~SpaceParticles() {

}
