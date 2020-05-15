#include "Engine.h"

Engine::Engine(Dino* player)
{
	this->player = player;
	bird = new BackgroundBird();
}
Engine::~Engine()
{

}
Dino* Engine::getPlayer()
{
	return player;
}
BackgroundBird* Engine::getBird()
{
	return bird;
}
void Engine::movePlayer()
{
	if (Keyboard::isKeyPressed(Keyboard::D))
	{
		player->setPosition(2, 0);
	}
	else if (Keyboard::isKeyPressed(Keyboard::A))
	{
		player->setPosition(-2, 0);
	}
	else if (Keyboard::isKeyPressed(Keyboard::W))
	{
		player->setPosition(0, -2);
	}
	else if (Keyboard::isKeyPressed(Keyboard::S))
	{
		player->setPosition(0, 2);
	}

}