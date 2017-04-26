#ifndef SPACEPARTICLES_HPP
#define SPACEPARTICLES_HPP

#include "SpaceObject.hpp"

class SpaceParticles : SpaceObject {
public:
    // arguments: health poits, speed, coord x, coord y, url on picture
    SpaceParticles( int = 100, int = 0, int = 0, int = 0, const string & = nullptr );
    ~SpaceParticles();

        virtual int moveDown( int ) override;
        virtual void changeHealth( int = 0 ) override;
};

#endif // SAPCESTRUCTURE_HPP
