/// \file space_object.h
/// \brief
/// \author
/// \data 16.12.2018

#include "space_object.h"

namespace space_shooter {
namespace client {

SpaceObject::SpaceObject(quint16 hp, quint16 spd, quint16 x,
                         quint16 y, quint16 l, quint16 w)
    : health_(hp), speed_(spd), coordX_(x), coordY_(y) {
    // empty body
}

void SpaceObject::SetHealth(const quint16 hp) {
        health_ = hp;
}

void SpaceObject::SetSpeed(quint16 spd) {
        speed_ = spd;
}

void SpaceObject::SetCoordX(quint16 x) {
    coordX_ = x;
}

void SpaceObject::SetCoordY(quint16 y) {
    coordY_ = y;
}

void SpaceObject::SetSize(quint16 length, quint16 width) {
  if (length > 0 && width > 0) {
    length_ = length;
    width_ = width;
  }
}

void SpaceObject::MoveDown() {
    SetCoordY(GetCoordY() - GetSpeed());
}

void SpaceObject::MoveUp() {
    SetCoordY(GetCoordY() + GetSpeed());
}

void SpaceObject::MoveRight() {
    SetCoordX(GetCoordX() + GetSpeed());
}

void SpaceObject::MoveLeft() {
    SetCoordX(GetCoordX() - GetSpeed());
}

/* move to graphic representation class
void SpaceObject::draw( const string &url, int randomNum ) {
    int randomNumber = 1 + ( rand() % randomNum );
    QString pic = url + QString::number( randomNumber ) + ".png";
    object.load( pic );
    setPixmap( object );
}
*/
}  // namespace client
}  // namespace space_shooter
