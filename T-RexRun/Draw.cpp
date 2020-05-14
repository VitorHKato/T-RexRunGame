#include "Draw.h"

Draw::Draw(Event* event, Dino* player)
{
	this->event = event;
	window = new RenderWindow(VideoMode(200, 200), "SFML works!");
	this->player = player;

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
		window->draw(player->getHitBox());
		window->display();
	}
}