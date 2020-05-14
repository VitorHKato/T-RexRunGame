#include "Draw.h"

int main()
{
    Event event;
    Dino* player = new Dino();
    Engine* engine = new Engine(player);
    Draw* window = new Draw(&event, engine);

    return 0;
}