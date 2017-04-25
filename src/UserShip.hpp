#ifndef USERSHIP_HPP
#define USERSHIP_HPP

#include "SpaceObject.hpp"

#include <string>

class UserShip : public SpaceObject {

public:
    UserShip( int = 100, int = 10, int = 0, int = 0, const string & = nullptr );
    ~UserShip();

    void setScore( int );
    int getScore() const;

/* move to graphic representation clas
    void keyPressEvent(QKeyEvent *event );
*/
    virtual int moveRight( int ) override;
    virtual int moveLeft( int ) override;
    virtual int moveUp( int ) override;
    virtual int moveDown( int ) override;
    virtual void changeHealth( int = 0 ) override;

private:
    int score;

};

#endif // USERSHIP_HPP
