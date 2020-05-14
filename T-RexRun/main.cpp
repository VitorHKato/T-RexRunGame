#include "Draw.h"

int main()
{
    Event event;
    Dino* player = new Dino();
    Draw* window = new Draw(&event, player);

    return 0;
}