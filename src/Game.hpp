#ifndef GAME_HPP
#define GAME_HPP

#include "UserShip.hpp"
#include "EnemyShip.hpp"
#include "LaserBeam.hpp"
#include "SapceParticles.hpp"

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QWidget>

// controller
class Game : public QObject, public QGraphicsView {
    Q_OBJECT
  public:
    Game( QWidget *parent = 0 );
    ~Game();

private:
    QGraphicsScene *scene;
    UserShip *player;
    EnemyShip *streamRunner;
    LaserBeam *laserBeam;
    SpaceParticles *spaceParticles;

    QList<SpaceObject *> object;
};

#endif // GAME_HPP
