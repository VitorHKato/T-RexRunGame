#include "Engine.h"

const float Engine::gravity = 0.15;

Engine::Engine(Dino* player, Event* event)
{
	this->player = player;
	this->event = event;
	timer = 1;
	speed = 0.2;

	initializeBackgroundElements();
	initializeObstacleElements();
}
Engine::~Engine()
{

}
Dino* Engine::getPlayer()
{
	return player;
}
Background* Engine::getBackgroundElement()
{

	for (i_backgroundElements = backgroundElements.begin(); 
		i_backgroundElements != backgroundElements.end(); 
		i_backgroundElements++)
	{
		return *i_backgroundElements;
	}
}
Obstacle* Engine::getObstacleElements()
{
	for (i_obstacleElements = obstacleElements.begin();
		i_obstacleElements != obstacleElements.end();
		i_obstacleElements++)
	{
		return *i_obstacleElements;
	}
}
void Engine::movePlayer()
{
	if (player->getIsDead())
	{
		timer = 1;
		speed = 0.2;
		player->setIsDead(false);
		restartGame();
	}

	timer++;

	if (timer % 1000 == 0)
	{
		speed += 0.008;
		timer = 1;
	}

	if (player->getPosition().y <= 400)
		player->setPosition(player->getPosition().x + speed, player->getPosition().y + gravity);
	else
		player->setPosition(player->getPosition().x + speed, player->getPosition().y);

	if (player->getJump() && player->getIsJumping())
	{
		player->setJump(false);
		player->setPosition(player->getPosition().x, player->getPosition().y - 150);
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
void Engine::initializeBackgroundElements()
{
	bird = new Bird();
	backgroundElements.push_back(bird);
}
void Engine::initializeObstacleElements()
{
	cactus = new Cactus();
	obstacleElements.push_back(cactus);
}
bool Engine::collision(Player* p, Obstacle* o)
{
	if (p->getHitBox().getGlobalBounds().intersects(o->getHitbox().getGlobalBounds()))
	{
		p->setIsDead(true);
		return true;
	}
		return false;
}
void Engine::manageCollisions()
{
	for (i_obstacleElements = obstacleElements.begin();
		i_obstacleElements != obstacleElements.end();
		i_obstacleElements++)
	{
		collision(player, *i_obstacleElements);
	}
}
void Engine::restartGame()
{
	resetPosition(player);

	for (i_obstacleElements = obstacleElements.begin();
		i_obstacleElements != obstacleElements.end();
		i_obstacleElements++)
	{
		resetPosition(*i_obstacleElements);
	}

	for (i_backgroundElements = backgroundElements.begin();
		i_backgroundElements != backgroundElements.end();
		i_backgroundElements++)
	{
		resetPosition(*i_backgroundElements);
	}
}
void Engine::resetPosition(Entity* e)
{
	e->setPosition(e->getInitialPositionX(), e->getInitialPositionY());
}