#include "Draw.h"
#include <iostream>

const int Draw::HEIGHT = 400;
const int Draw::WIDTH = 1200;

Draw::Draw(Event* event, Engine* engine)
{
	this->event = event;
	desktop = VideoMode::getDesktopMode();
	window = new RenderWindow(VideoMode(WIDTH, HEIGHT, desktop.bitsPerPixel), "T-Rex Run!");
	view.setSize(WIDTH, HEIGHT);
	view.setCenter(Vector2f(WIDTH / 2, HEIGHT));
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
		CameraControl();
		ResetBirdPosition();

		window->setView(view);
		window->clear();
		window->draw(engine->getBird()->getShape());
		window->draw(engine->getPlayer()->getHitBox());
		window->display();
	}
}
void Draw::CameraControl()
{
	std::cout << engine->getPlayer()->getPosition().x << std::endl;

	if (engine->getPlayer()->getPosition().x > WIDTH / 3)
		view.setCenter(Vector2f(engine->getPlayer()->getPosition().x + WIDTH / 3 - 200, engine->getPlayer()->getPosition().y));
}
void Draw::ResetBirdPosition()
{
	if ((int)engine->getPlayer()->getPosition().x % WIDTH * 2 == 0)
		engine->getBird()->setPosition(engine->getPlayer()->getPosition().x + WIDTH - 215, 250);
}