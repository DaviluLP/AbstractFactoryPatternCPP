
#include "ControllerBoard.h"
#include "FlyFactory.h"
#include "QuadroFactory.h"

int main(int argc, char* argv[])
{
    QuadrocopterFactory* flyFactory = new FlyFactory();
    QuadrocopterFactory* quadroFactory = new QuadroFactory();
    
    ControllerBoard* controller_board = new ControllerBoard(flyFactory);
    ControllerBoard* controller_board2 = new ControllerBoard(quadroFactory);
    
    return 0;
}
