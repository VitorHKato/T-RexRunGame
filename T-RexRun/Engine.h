#include "SFML/Graphics.hpp"
#include "Dino.h"
#pragma once
using namespace sf;

class Engine
{
private:
	Dino* player;
public:
	Engine(Dino* player);
	~Engine();

	Dino* getPlayer();

	void movePlayer();
};