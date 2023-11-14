#pragma once
#include <iostream>
#include "Regulator.h"

using namespace std;

class FlyRegulator : public Regulator
{
public:

    //Methoden
    FlyRegulator();
    
    void IncreaseVoltage() override;
};
