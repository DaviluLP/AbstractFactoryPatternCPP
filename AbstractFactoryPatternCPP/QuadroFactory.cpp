#include "QuadroFactory.h"

#include "QuadroEngine.h"
#include "QuadroRegulator.h"

Engine* QuadroFactory::CreateEngine()
{
    return new QuadroEngine();
}

Regulator* QuadroFactory::CreateRegulator()
{
    return new QuadroRegulator;
}
