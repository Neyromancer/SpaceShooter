#include "SpaceParticles.hpp"
#include "SpaceObject.hpp"

SpaceParticles::SpaceParticles( unsigned int hp, unsigned int spd, unsigned int x, unsigned int y, unsigned int l, unsigned int w )
    : SpaceObject( hp, spd, x, y, l, w ) {
    // empty body
}

void SpaceParticles::changeHealth( unsigned int frc ) {
    SpaceObject::setHealth( frc );
}

SpaceParticles::~SpaceParticles() {

}
