#ifndef SPACEPARTICLES_HPP
#define SPACEPARTICLES_HPP

#include "SpaceObject.hpp"

class SpaceParticles : SpaceObject {
public:
    // arguments: health poits, speed, coord x, coord y, lenght l, width w, url on picture
    SpaceParticles( unsigned int = 100, unsigned int = 0, unsigned int = 0, unsigned int = 0, unsigned int = 1, unsigned int = 1/*, const string & = nullptr */);
    ~SpaceParticles();

        virtual int moveDown( int ) override;
        virtual void changeHealth( unsigned int = 0 ) override;
};

#endif // SAPCESTRUCTURE_HPP
