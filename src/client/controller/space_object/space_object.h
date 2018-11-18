#ifndef SPACEOBJECT_HPP
#define SPACEOBJECT_HPP

#include <string>

class SpaceObject {
public:
    // arguments: health poits, speed, coord x, coord y, lenght l, width w
    SpaceObject( unsigned int = 100, unsigned int = 0, unsigned int = 0, unsigned int = 0, unsigned int = 1, unsigned int = 1 );
    virtual ~SpaceObject();

    void setHealth( unsigned int );
    unsigned int getHealth() const;

    void setSpeed( int );
    int getSpeed() const;

    void setCoord( unsigned int, unsigned int );

    // setCoordY func may except argument that conatin object's width ( such as x + width() )
    void setCoordX( unsigned int );
    unsigned int getCoordX() const;

    // setCoordY func may except argument that conatin object's height ( such as y + height() )
    void setCoordY( unsigned int );
    unsigned int getCoordY() const;

    void setWidth( unsigned int );
    unsigned int getWidth() const;

    void setLength( unsigned int );
    unsigned int getLength() const;

    void moveRight();
    void moveLeft();
    void moveUp();
    void moveDown();

    virtual void changeHealth( unsigned int = 0 ) = 0;

/* move to graphic representation class
public slots:
    virtual void draw( const string &, int );
*/

private:
        unsigned int health;
        int speed;
        unsigned int coordX;
        unsigned int coordY;
        unsigned int length;
        unsigned int width;
};


#endif // SPACEOBJECT_HPP
