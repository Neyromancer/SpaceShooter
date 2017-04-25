#ifndef GAME_HPP
#define GAME_HPP

#include "UserShip.hpp"
#include "EnemyShip.hpp"

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QWidget>

class Game : public QGraphicsView {
  public:
    Game( QWidget *parent = 0 );
    ~Game();

private:
    QGraphicsScene *scene;
    UserShip *player;
    EnemyShip *streamRunner;

};

#endif // GAME_HPP
