#ifndef UISPACEPARTICLE_HPP
#define UISPACEPARTICLE_HPP

#include "UISpaceObject.hpp"

class UISpaceParticle : public UISpaceObject {
public:
    UISpaceParticle( QString = nullptr, QGraphicsItem *parent = 0 );
};

#endif // UISPACEPARTICLE_HPP
