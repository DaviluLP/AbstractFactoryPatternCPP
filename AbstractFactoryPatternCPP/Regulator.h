#pragma once
#include <array>

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
