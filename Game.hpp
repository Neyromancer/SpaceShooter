#ifndef GAME_HPP
#define GAME_HPP

#include "SpaceShip.hpp"
#include "Score.hpp"
#include "Health.hpp"

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>

class Game : public QGraphicsView {
    Q_OBJECT

public:
    Game( QWidget *parent = 0 );
    void createBackGroundParticles();

    QGraphicsScene *scene;
    SpaceShip *spaceShip;
    QTimer *timer;
//    Score *score;
//    Health *hearlth;

public slots:
    void spawnBackGroundParticles();
};

#endif // GAME_HPP
