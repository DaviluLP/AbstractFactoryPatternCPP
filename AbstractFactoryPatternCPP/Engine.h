#pragma once
#include <iostream>

using namespace std;

class Engine
{
public:
    virtual ~Engine() = default;

    //Eigenschaften
    double EngineSpeed;

    //Methode
    virtual void RevCounter();
    
};
