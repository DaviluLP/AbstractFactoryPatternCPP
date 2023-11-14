#include "FlyFactory.h"

#include "FlyEngine.h"
#include "FlyRegulator.h"

Engine* FlyFactory::CreateEngine()
{
    return new FlyEngine;
}

Regulator* FlyFactory::CreateRegulator()
{
    return new FlyRegulator;
}
