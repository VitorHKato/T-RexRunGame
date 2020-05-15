#include "Engine.h"
#include <iostream>
using namespace std;

Engine::Engine(Dino* player)
{
	this->player = player;
}
Engine::~Engine()
{

}
Dino* Engine::getPlayer()
{
	return player;
}
void Engine::movePlayer()
{
	if (Keyboard::isKeyPressed(Keyboard::D))
	{
		player->setPosition(0.1, 0);
	}
	else if (Keyboard::isKeyPressed(Keyboard::A))
	{
		player->setPosition(-0.1, 0);
	}
	else if (Keyboard::isKeyPressed(Keyboard::W))
	{
		player->setPosition(0, -0.1);
	}
	else if (Keyboard::isKeyPressed(Keyboard::S))
	{
		player->setPosition(0, 0.1);
	}

}