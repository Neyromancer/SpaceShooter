#ifndef ENEMYSHIP_HPP
#define ENEMYSHIP_HPP

#include "SpaceObject.hpp"
#include <string>

class EnemyShip : public SpaceObject {
public:
    EnemyShip( unsigned int = 100, unsigned int = 5, unsigned int = 0, unsigned int = 0, unsigned int = 1, unsigned int = 1, unsigned int = 1000 );
    ~EnemyShip();

    virtual int moveRight( int ) override;
    virtual int moveLeft( int ) override;
    virtual int moveUp( int ) override;
    virtual int moveDown( int ) override;
    virtual void changeHealth( int = 0 ) override;

private:
    void setBulletCharge( unsigned int );
    unsigned int getBulletCharge() const;
    unsigned int bulletCharge;
};

#endif // ENEMYSHIP_HPP
