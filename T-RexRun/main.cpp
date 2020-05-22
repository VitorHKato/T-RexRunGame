#include "Draw.h"

int main()
{
    Event* event = new Event();
    Dino* player = new Dino();
    Engine* engine = new Engine(player, event);
    Draw* window = new Draw(event, engine);

    return 0;
}