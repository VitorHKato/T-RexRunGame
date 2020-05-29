#include "SFML/Graphics.hpp"
#include "Dino.h"
#include "Bird.h"
#include "Cactus.h"
#pragma once
using namespace sf;

class Engine
{
private:
	Dino* player;
	Event* event;
	Bird* bird;
	Cactus* cactus;
	static const float gravity;
	float speed;
	int timer;				//Contador para incrementar a aceleração
public:
	Engine(Dino* player, Event* event);
	~Engine();

	Dino* getPlayer();
	Bird* getBird();
	Cactus* getCactus();

	void movePlayer();
	void playerJump();
};