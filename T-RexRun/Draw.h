#include <stdio.h>
#include "Dino.h"
#include "SFML/Graphics.hpp"
using namespace sf;

class Draw
{
private:
	Event* event;
	RenderWindow* window;

	Dino* player;
public:
	Draw(Event* event, Dino* player);
	~Draw();

	void loop(Event* event);
};