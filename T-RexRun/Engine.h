#include "SFML/Graphics.hpp"
#include "Dino.h"
#include "BackgroundBird.h"
#pragma once
using namespace sf;

class Engine
{
private:
	Dino* player;
	BackgroundBird* bird;
public:
	Engine(Dino* player);
	~Engine();

	Dino* getPlayer();
	BackgroundBird* getBird();

	void movePlayer();
};