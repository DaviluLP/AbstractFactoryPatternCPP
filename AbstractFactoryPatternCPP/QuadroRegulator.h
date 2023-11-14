#pragma once
#include "Regulator.h"

class QuadroRegulator : public Regulator
{
public:

    QuadroRegulator();

    void IncreaseVoltage() override;
};
