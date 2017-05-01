#ifndef SPACEOBJECT_HPP
#define SPACEOBJECT_HPP

#include <string>

class SpaceObject {
public:
    // arguments: health poits, speed, coord x, coord y, lenght l, width w, url on picture
    SpaceObject( unsigned int = 100, unsigned int = 0, unsigned int = 0, unsigned int = 0, unsigned int = 1, unsigned int = 1 /*, const string & = nullptr */);
    virtual ~SpaceObject();

    void setHealth( unsigned int );
    int getHealth() const;

    void setSpeed( unsigned int );
    int getSpeed() const;

    void setCoord( unsigned int, unsigned int );

    // setCoordY func may except argument that conatin object's width ( such as x + width() )
    void setCoordX( unsigned int );
    int getCoordX() const;

    // setCoordY func may except argument that conatin object's height ( such as y + height() )
    void setCoordY( unsigned int );
    int getCoordY() const;

    void setWidth( unsigned int );
    unsigned int getWidth() const;

    void setHeight( unsigned int );
    unsigned int getHeight() const;

    // this function should be based on moving behaviour ( i.e. left, right, up or down )
    // load pics from the source folder
    // recieved integer will stay for the direction implemented
    void setPicPath( int );
    string &getPicPath() const;

    // if out of screen will emit non zero value
    virtual int moveRight( const unsigned int );
    virtual int moveLeft( const unsigned int );
    virtual int moveUp( const unsigned int );
    virtual int moveDown( const unsigned int );
    virtual void changeHealth( unsigned int = 0 ) = 0;

/* move to graphic representation class
public slots:
    virtual void draw( const string &, int );
*/

private:
        unsigned int health;
        unsigned int speed;
        unsigned int coordX;
        unsigned int coordY;
        unsigned int length;
        unsigned int width;
        string picPath;
};


#endif // SPACEOBJECT_HPP
