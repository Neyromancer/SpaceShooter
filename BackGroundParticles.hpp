#ifndef BACKGROUNDPARTICLES_HPP
#define BACKGROUNDPARTICLES_HPP

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>

class BackGroundParticles : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT

public:
    BackGroundParticles( QGraphicsItem *parent = 0 );

public slots:
    void move();
};

#endif // BACKGROUNDPARTICLES_HPP
