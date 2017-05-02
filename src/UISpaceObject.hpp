#ifndef UISPACEOBJECT_HPP
#define UISPACEOBJECT_HPP

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QString>

class UISpaceObject : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT

public:
    UISpaceObject( QString = nullptr, QGraphicsItem *parent = 0 );

    QPixmap getObject() const;
    void setObject( const QPixmap & );

public slots:
    virtual void changePicture();

private:
     QPixmap object;
};

#endif // UISPACEOBJECT_HPP
