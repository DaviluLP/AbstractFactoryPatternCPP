#pragma once
#include "QuadrocopterFactory.h"

class FlyFactory : public QuadrocopterFactory
{
public:

    Engine* CreateEngine() override;
    Regulator* CreateRegulator() override;
    
};
