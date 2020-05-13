#include <stdio.h>
#include "SFML/Graphics.hpp"
using namespace sf;

class Draw
{
private:
	Event* event;
	RenderWindow* window;
public:
	Draw(Event* event);
	~Draw();

	void loop(Event* event);
};