#include "UISpaceObject.hpp"

#include <QString>

UISpaceObject::UISpaceObject( QString str, QGraphicsItem *parent )
    : QObject(), QGraphicsPixmapItem( parent ), object( str ) {
    setPixmap( object );
}

QPixmap UISpaceObject::getObject() const {
    return object;
}
void UISpaceObject::setObject( const QPixmap &obj ) {
        object = obj;
}

QString UISpaceObject::getUrl() const {
    return url;
}

void UISpaceObject::setUrl( const QString &link ) {
    url = link;
}

void UISpaceObject::changePicture() {
    int randomNumber = 1 + ( rand() % 8 );
    QString pic = ":/texture/" + QString::number( randomNumber ) + ".png";
    object.load( pic );
    setPixmap( object );
}
