#ifndef ENEMYSHIP_HPP
#define ENEMYSHIP_HPP

#include "SpaceObject.hpp"
#include <string>

class EnemyShip : public SpaceObject {
public:
    EnemyShip( unsigned int = 100, unsigned int = 5, unsigned int = 0, unsigned int = 0, unsigned int = 1, unsigned int = 1, unsigned int = 1000 );
    ~EnemyShip();

    virtual void changeHealth( unsigned int = 0 ) override;

private:
    void setBulletCharge( unsigned int );
    unsigned int getBulletCharge() const;
    unsigned int bulletCharge;
};

#endif // ENEMYSHIP_HPP
