#ifndef LASERBEAM_HPP
#define LASERBEAM_HPP

class LaserBeam : SpaceObject {
public:
    // arguments: health poits, speed, coord x, coord y, url on picture
    LaserBeam( int = 100, int = 0, int = 0, int = 0, const string & = nullptr );
    ~LaserBeam();

     virtual void changeHealth( int = 0 ) override;

};

#endif // LASERBEAM_HPP
