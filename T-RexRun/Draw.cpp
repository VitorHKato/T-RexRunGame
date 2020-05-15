#include "Draw.h"
#include <iostream>

const int Draw::HEIGHT = 400;
const int Draw::WIDTH = 1200;

Draw::Draw(Event* event, Engine* engine)
{
	this->event = event;
	desktop = VideoMode::getDesktopMode();
	window = new RenderWindow(VideoMode(WIDTH, HEIGHT, desktop.bitsPerPixel), "T-Rex Run!");
	//view.reset(FloatRect(0.0, 0.0, 0.0, ));
	view.setSize(WIDTH, HEIGHT);
	this->engine = engine;

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

		engine->movePlayer();

		std::cout << engine->getPlayer()->getPosition().x << std::endl;

		if(engine->getPlayer()->getPosition().x > WIDTH/2)
			view.setCenter(engine->getPlayer()->getPosition());

		int x = engine->getPlayer()->getPosition().x;
		if (x % WIDTH*2 == 0)
			engine->getBird()->setPosition(engine->getPlayer()->getPosition().x + WIDTH/2, 300);

		std::cout << engine->getBird()->getPosition().x + WIDTH << std::endl;

		window->setView(view);
		window->clear();
		window->draw(engine->getBird()->getShape());
		window->draw(engine->getPlayer()->getHitBox());
		window->display();
	}
}