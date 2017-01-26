#ifndef GAME_HPP
#define GAME_HPP

#include "myrect.hpp"
#include "score.hpp"
#include "health.hpp"

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>

class Game : public QGraphicsView {
public:
    Game( QWidget *parent = 0 );

    QGraphicsScene * scene;
    MyRect *player;

    Score *score;
    Health *health;
};

#endif // GAME_HPP
