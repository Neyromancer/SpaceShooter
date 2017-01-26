#include "myrect.hpp"
#include "game.hpp"

#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QMediaPlayer>
#include <QBrush>
#include <QImage>

Game::Game( QWidget *parent) {

    // create the scene
    scene = new QGraphicsScene();
    scene->setSceneRect( 0, 0, 800, 600 ); // make the scene 800x600 instead of infinity
    setBackgroundBrush( QBrush( QImage( "/home/dmitry/workspace/university/programming/firstSemester/cpp/qtcreator/GameTutorial/22_01_2017/SimpleGame_01/bg.png" ) ) );

    // make the newly created scene the scene to visualize ( since Game is a QGraphicsView widget )
    // it can be used to visualize scenes )
    setScene( scene );
    setHorizontalScrollBarPolicy( Qt::ScrollBarAlwaysOff );
    setVerticalScrollBarPolicy( Qt::ScrollBarAlwaysOff );
    setFixedSize( 800, 600 );

    // create the player
    player = new MyRect();
    player->setPos( 400, 500 ); // TODO generalize to always be in the middle bottom of screen
    // make the player focusable and set it to be the current focus
    player->setFlag( QGraphicsItem::ItemIsFocusable );
    player->setFocus();
    // add the item to the scene
    scene->addItem( player );

    // create the score/health
    score = new Score();
    scene->addItem( score );
    health = new Health();
    health->setPos( health->x(), health->y() + 25 );
    scene->addItem( health );

    // spawn enemies
    QTimer *timer = new QTimer();
    QObject::connect( timer, SIGNAL( timeout() ), player, SLOT( spawn() ) );
    timer->start( 2000 );
/*
    // play background music
    QMediaPlayer *music = new QMediaPlayer();
    music->setMedia( QUrl( "qrc:/sounds/Loading_Loop.wav") );
    if ( music->state() == QMediaPlayer::PlayingState ) {
        music->setPosition( 0 );
    } else if ( music->state() == QMediaPlayer::StoppedState )
        music->play();
*/
    show();
}
