#include "Game.hpp"
#include "SpaceShip.hpp"
#include "BackGroundParticles.hpp"

#include <QTimer>
#include <QBrush>
#include <QImage>

Game::Game(QWidget *parent) {
    // creating Scene
    scene = new QGraphicsScene( this );
    scene->setSceneRect( 0, 0, 800, 600 );
    setBackgroundBrush( QBrush ( QImage( ":/texture/Background/background01.jpg" ) ) );

    // set window
    setScene( scene );
    setHorizontalScrollBarPolicy( Qt::ScrollBarAlwaysOff );
    setVerticalScrollBarPolicy( Qt::ScrollBarAlwaysOff );
    setFixedSize( 800, 600 );

    // create SpaceShip
    spaceShip = new SpaceShip();
    spaceShip->setPos( 400, 500 ); // set always in the middle
    // make the player focusable and set it to be the current focus
    spaceShip->setFlag( QGraphicsItem::ItemIsFocusable );
    spaceShip->setFocus();
    scene->addItem( spaceShip );

    // creating background particles
    timer = new QTimer( this );
    createBackGroundParticles();

}

void Game::createBackGroundParticles() {
    QObject::connect( timer, SIGNAL( timeout() ), this, SLOT( spawnBackGroundParticles() ) );
    timer->start( 20 );
}

void Game::spawnBackGroundParticles() {
    BackGroundParticles *particle = new BackGroundParticles();
    scene->addItem( particle );
}


