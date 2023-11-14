#pragma once
#include "QuadrocopterFactory.h"

class QuadroFactory : public QuadrocopterFactory
{
public:
    Engine* CreateEngine() override;
    Regulator* CreateRegulator() override;
    
};
