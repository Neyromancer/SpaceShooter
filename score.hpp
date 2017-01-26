#ifndef SCORE_HPP
#define SCORE_HPP

#include <QGraphicsTextItem>

class Score : public QGraphicsTextItem{
public:
    Score( QGraphicsItem *parent = 0 );
    void increase();
    int getScore();


private:
    int score;

};

#endif // SCORE_HPP
