#include "Engine.h"

const float Engine::gravity = 0.5;

Engine::Engine(Dino* player, Event* event)
{
	this->player = player;
	this->event = event;
	bird = new BackgroundBird();
	timer = 1;
	speed = 0.5;
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
	timer++;

	if (timer % 1000 == 0)
		speed += 0.01;

	if (player->getPosition().y <= 400)
		player->setPosition(speed, gravity);
	else
		player->setPosition(speed, 0);

	std::cout << player->getPosition().y << std::endl;

	if (player->getJump() && player->getIsJumping())
	{
		player->setJump(false);
		player->setPosition(0, -50);
	}

}
void Engine::playerJump()
{
	if (event->type == Event::KeyPressed && event->key.code == Keyboard::Space)
	{
		player->setJump(true);
		player->setIsJumping(true);
	}
}