#include "Draw.h"

Draw::Draw(Event* event)
{
	this->event = event;
	window = new RenderWindow(VideoMode(200, 200), "SFML works!");

	loop(event);
}
Draw::~Draw()
{

}

void Draw::loop(Event* event)
{
	while (window->isOpen())
	{
		while (window->pollEvent(*event))
		{
			if (event->type == event->Closed)
				window->close();
		}

		window->clear();
		window->display();
	}
}