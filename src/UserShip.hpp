#ifndef USERSHIP_HPP
#define USERSHIP_HPP

#include "SpaceObject.hpp"

class UserShip : public SpaceObject {

public:
    UserShip( unsigned int = 100, unsigned int = 10, unsigned int = 0, unsigned int = 0, unsigned int = 1, unsigned int = 1, unsigned int = 1000 );
    ~UserShip();

    void setScore( unsigned int );
    unsigned int getScore() const;

    void setBulletCharge( unsigned int );
    unsigned int getBulletCharge() const;

    virtual int moveRight( const int ) override;
    virtual int moveLeft( const int ) override;
    virtual int moveUp( const int ) override;
    virtual int moveDown( const int ) override;
    virtual void changeHealth( unsigned int = 0 ) override;

private:
    unsigned int score;
    unsigned int bulletCharge;


};

#endif // USERSHIP_HPP
