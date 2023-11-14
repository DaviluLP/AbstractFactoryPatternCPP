#pragma once
#include <iostream>
#include <array>

using namespace std;

class Regulator
{
public:
    virtual ~Regulator() = default;

    //Eigenschaften
    double CurrentVoltage;
    double CurrentCurrent;

    //Methoden
    virtual void IncreaseVoltage();
    
};
