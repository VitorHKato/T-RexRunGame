#include "Draw.h"
#include <iostream>
#include <random>
using namespace std;

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
	frame = 0;

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

			engine->playerJump();
		}

		frame++;

		engine->movePlayer();
		CameraControl();
		ResetScenario();

		if (frame >= 5000)
			engine->getPlayer()->setFastMode(true);


		window->setView(view);
		window->clear(Color::White);
		window->draw(engine->getBackgroundElement()->getSprite());
		window->draw(engine->getPlayer()->getSprite());
		window->draw(engine->getObstacleElements()->getSprite());
		window->display();
	}
}
void Draw::CameraControl()
{
	if (engine->getPlayer()->getPosition().x > WIDTH / 3)
		view.setCenter(Vector2f(engine->getPlayer()->getPosition().x + WIDTH / 3 - 200, HEIGHT));
}
void Draw::ResetScenario()
{
	random_device rd;   // non-deterministic generator
	mt19937 gen(rd());  // to seed mersenne twister.
	uniform_int_distribution<> dist(0, 1000); // distribute results between 0 and 1000 inclusive.

	///P�ssaro sempre reaparecer� um pouco � frente do jogador
	if(engine->getBackgroundElement()->getPosition().x < engine->getPlayer()->getPosition().x - WIDTH / 2)
		engine->getBackgroundElement()->setPosition(engine->getPlayer()->getPosition().x + WIDTH / 2 + 200, 250);

	///Obst�culo reaparecer� � frente em uma posi��o aleat�ria
	if(engine->getObstacleElements()->getPosition().x < engine->getPlayer()->getPosition().x - WIDTH / 2)
		engine->getObstacleElements()->setPosition(engine->getPlayer()->getPosition().x + WIDTH / 2 + dist(gen), HEIGHT);

}