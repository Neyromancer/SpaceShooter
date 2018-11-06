#include "SpaceObject.hpp"
#include "EnemyShip.hpp"

#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <stdlib.h>

EnemyShip::EnemyShip( unsigned int hp, unsigned int spd, unsigned int x, unsigned int y, unsigned int l, unsigned int w, unsigned int b )
    : SpaceObject( hp, spd, x, y, l, w ),
      bulletCharge( b ) {
    // empty body
}

void EnemyShip::setBulletCharge( unsigned int bullet ) {
    if ( bullet >= 0 )
        bulletCharge = bullet;
    else bulletCharge = 0;
}
unsigned int EnemyShip::getBulletCharge() const {
    return bulletCharge;
}

// frc - strike force will depend on the power of the bullet used. Define how to build this.
void EnemyShip::changeHealth( unsigned int frc ) {
    // can change later
    SpaceObject::setHealth( SpaceObject::getHealth() - frc );
}

EnemyShip::~EnemyShip() {

}
