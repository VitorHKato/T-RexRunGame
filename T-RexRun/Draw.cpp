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

		engine->movePlayer();
		CameraControl();
		ResetScenario();

		window->setView(view);
		window->clear(Color::White);
		window->draw(engine->getBird()->getSprite());
		window->draw(engine->getPlayer()->getSprite());
		window->draw(engine->getCactus()->getSprite());
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

	///Pássaro sempre reaparecerá um pouco à frente do jogador
	if(engine->getBird()->getPosition().x < engine->getPlayer()->getPosition().x - WIDTH / 2)
		engine->getBird()->setPosition(engine->getPlayer()->getPosition().x + WIDTH / 2 + 200, 250);

	///Obstáculo reaparecerá à frente em uma posição aleatória
	if(engine->getCactus()->getPosition().x < engine->getPlayer()->getPosition().x - WIDTH / 2)
		engine->getCactus()->setPosition(engine->getPlayer()->getPosition().x + WIDTH / 2 + dist(gen), HEIGHT);

}