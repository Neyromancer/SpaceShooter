#include "UISpaceObject.hpp"
#include "UIUserShip.hpp"

UIUserShip::UIUserShip( QString str, QGraphicsItem *parent)
    : UISpaceObject( str, parent ) {

}

void UIUserShip::changePicture() {
    int randomNumber = 1 + ( rand() % 8 );
    QString pic = ":/texture/Mobs/User/Animation/" + QString::number( randomNumber ) + ".png";
    UISpaceObject::getObject().load( pic );
    setPixmap( UISpaceObject::getObject() );
}
