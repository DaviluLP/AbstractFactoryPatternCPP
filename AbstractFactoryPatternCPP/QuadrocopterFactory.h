#pragma once
#include <iostream>

#include "Engine.h"
#include "Regulator.h"

using namespace std;

class QuadrocopterFactory
{
public:
    virtual ~QuadrocopterFactory() = default;

    //Methoden
    virtual Engine* CreateEngine();
    virtual Regulator* CreateRegulator();
    
};
