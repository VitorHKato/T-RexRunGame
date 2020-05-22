#include "SFML/Graphics.hpp"
#include "Dino.h"
#include "BackgroundBird.h"
#pragma once
using namespace sf;

class Engine
{
private:
	Dino* player;
	Event* event;
	BackgroundBird* bird;
	static const float gravity;
	float speed;
	int timer;
public:
	Engine(Dino* player, Event* event);
	~Engine();

	Dino* getPlayer();
	BackgroundBird* getBird();

	void movePlayer();
	void playerJump();
};