#include <stdio.h>
#include "Engine.h"
#include "SFML/Graphics.hpp"
using namespace sf;

class Draw
{
private:
	Event* event;
	RenderWindow* window;

	Engine* engine;
public:
	Draw(Event* event, Engine* engine);
	~Draw();

	void loop(Event* event);
};