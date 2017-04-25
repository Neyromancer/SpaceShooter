#ifndef ENEMYSHIP_HPP
#define ENEMYSHIP_HPP

#include "SpaceObject.hpp"
#include <string>

class EnemyShip : public SpaceObject {
public:
    EnemyShip( int = 100, int = 5, int = 0, int = 0, const string & = nullptr );
    ~EnemyShip();

    virtual int moveRight( int ) override;
    virtual int moveLeft( int ) override;
    virtual int moveUp( int ) override;
    virtual int moveDown( int ) override;
    virtual void changeHealth( int = 0 ) override;
};

#endif // ENEMYSHIP_HPP
