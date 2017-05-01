#ifndef LASERBEAM_HPP
#define LASERBEAM_HPP

class LaserBeam : SpaceObject {
public:
    // arguments: health poits, speed, coord x, coord y, lenght l, width w,, url on picture
    LaserBeam( unsigned int = 100, unsigned int = 0, unsigned int = 0, unsigned int = 0, unsigned int = 1, unsigned int= 1 /*, const string & = nullptr */);
    ~LaserBeam();

     virtual void changeHealth( unsigned int = 0 ) override;

};

#endif // LASERBEAM_HPP
