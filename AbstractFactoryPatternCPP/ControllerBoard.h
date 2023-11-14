#pragma once
#include "Engine.h"
#include "QuadrocopterFactory.h"
#include "Regulator.h"

class ControllerBoard
{
public:

    ControllerBoard(QuadrocopterFactory*);

    Regulator* MyRegulator;
    Engine* MyEngine;
    QuadrocopterFactory* UsedFactory;

    void CreateParts();
    
};
