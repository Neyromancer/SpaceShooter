#ifndef LASERBEAM_HPP
#define LASERBEAM_HPP

#include "SpaceObject.hpp"

class LaserBeam : SpaceObject {
public:
    // arguments: health poits, speed, coord x, coord y, lenght l, width w
    LaserBeam( unsigned int = 100, unsigned int = 0, unsigned int = 0, unsigned int = 0, unsigned int = 1, unsigned int= 1 );
    ~LaserBeam();

    virtual void changeHealth( unsigned int = 0 ) override;

};

#endif // LASERBEAM_HPP
