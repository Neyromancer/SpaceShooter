#ifndef UIUSERSHIP_HPP
#define UIUSERSHIP_HPP

#include "UISpaceObject.hpp"

#include <QObject>

class UIUserShip : public UISpaceObject {
    Q_OBJECT

public:
    UIUserShip( QString = nullptr, QGraphicsItem *parent = 0 );

public slots:
    virtual void changePicture() override;
};

#endif // UIUSERSHIP_HPP
