#ifndef SCREEN_HPP
#define SCREEN_HPP

#include "UIUserShip.hpp"
#include "UISpaceParticle.hpp"

#include <QGraphicsView>
#include <QObject>
#include <QWidget>
#include <QGraphicsItem>
#include <QGraphicsScene>

class Screen : public QGraphicsView {
    Q_OBJECT

public:
    Screen( QGraphicsItem *item = 0, QWidget *parent = 0 );
    void loadItem( QGraphicsItem * );

public slots:
    void createBackGroundParticles();

private:
    QGraphicsScene *scene;
    UIUserShip *user;
    UISpaceParticle *particle;
    QGraphicsItem *obj;
    const unsigned int PIXELS_PER_METER = 2;
};

#endif // SCREEN_HPP
