#include "Engine.h"

const float Engine::gravity = 0.15;

Engine::Engine(Dino* player, Event* event)
{
	this->player = player;
	this->event = event;
	bird = new Bird();
	obstacle = new Obstacle();
	timer = 1;
	speed = 0.2;
}
Engine::~Engine()
{

}
Dino* Engine::getPlayer()
{
	return player;
}
Bird* Engine::getBird()
{
	return bird;
}
Obstacle* Engine::getObstacle()
{
	return obstacle;
}
void Engine::movePlayer()
{
	timer++;

	if (timer % 1000 == 0)
	{
		speed += 0.008;
		timer = 1;
	}

	if (player->getPosition().y <= 400)
		player->setPosition(speed, gravity);
	else
		player->setPosition(speed, 0);

	if (player->getJump() && player->getIsJumping())
	{
		player->setJump(false);
		player->setPosition(0, -150);
	}

	if (player->getPosition().y >= 400)
		player->setIsJumping(false);

}
void Engine::playerJump()
{
	if (!player->getIsJumping())
	{
		if (event->type == Event::KeyPressed && event->key.code == Keyboard::Space ||
			event->type == Event::KeyPressed && event->key.code == Keyboard::W)
		{
			player->setJump(true);
			player->setIsJumping(true);
		}
	}
}