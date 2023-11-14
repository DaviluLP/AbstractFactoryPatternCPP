#include "ControllerBoard.h"

ControllerBoard::ControllerBoard(QuadrocopterFactory* usedFactory)
{
    UsedFactory = usedFactory;

    CreateParts();
}

void ControllerBoard::CreateParts()
{
    MyRegulator = UsedFactory->CreateRegulator();
    MyEngine = UsedFactory->CreateEngine();
}
