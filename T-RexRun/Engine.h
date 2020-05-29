#include "SFML/Graphics.hpp"
#include "Dino.h"
#include "Bird.h"
#include "Obstacle.h"
#pragma once
using namespace sf;

class Engine
{
private:
	Dino* player;
	Event* event;
	Bird* bird;
	Obstacle* obstacle;
	static const float gravity;
	float speed;
	int timer;				//Contador para incrementar a aceleração
public:
	Engine(Dino* player, Event* event);
	~Engine();

	Dino* getPlayer();
	Bird* getBird();
	Obstacle* getObstacle();

	void movePlayer();
	void playerJump();
};