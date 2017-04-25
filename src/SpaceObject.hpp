#ifndef SPACEOBJECT_HPP
#define SPACEOBJECT_HPP

#include <string>

class SpaceObject {
public:
    SpaceObject( int = 100, int = 0, int = 0, int = 0, const string & = nullptr );
    virtual ~SpaceObject();

    void setHealth( int );
    int getHealth() const;

    void setSpeed( int );
    int getSpeed() const;

    void setCoord( int, int );

    // setCoordY func may except argument that conatin object's width ( such as x + width() )
    void setCoordX( int );
    int getCoordX() const;

    // setCoordY func may except argument that conatin object's height ( such as y + height() )
    void setCoordY( int );
    int getCoordY() const;

    void setPicPath( const string & );
    string &getPicPath() const;

    // if out of screen will emit non zero value
    virtual int moveRight( int );
    virtual int moveLeft( int );
    virtual int moveUp( int );
    virtual int moveDown( int );
    virtual void changeHealth( int = 0 ) = 0;

/* move to graphic representation class
public slots:
    virtual void draw( const string &, int );
*/

private:
        int health;
        int speed;
        int coordX;
        int coordY;
        string picPath;
};


#endif // SPACEOBJECT_HPP
