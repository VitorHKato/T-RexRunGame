#include "SFML/Graphics.hpp"
#include "Dino.h"
#include "BackgroundBird.h"
#include "Obstacle.h"
#pragma once
using namespace sf;

class Engine
{
private:
	Dino* player;
	Event* event;
	BackgroundBird* bird;
	Obstacle* obstacle;
	static const float gravity;
	float speed;
	int timer;
public:
	Engine(Dino* player, Event* event);
	~Engine();

	Dino* getPlayer();
	BackgroundBird* getBird();
	Obstacle* getObstacle();

	void movePlayer();
	void playerJump();
};