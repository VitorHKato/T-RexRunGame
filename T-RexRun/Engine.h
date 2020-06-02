#include "SFML/Graphics.hpp"
#include "Dino.h"
#include "Bird.h"
#include "Cactus.h"
#include <List>
#pragma once
using namespace sf;
using namespace std;

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

	list<Background*> backgroundElements;
	list<Background*>::iterator i_backgroundElements;

	list<Obstacle*> obstacleElements;
	list<Obstacle*>::iterator i_obstacleElements;
public:
	Engine(Dino* player, Event* event);
	~Engine();

	Dino* getPlayer();
	Background* getBackgroundElement();
	Obstacle* getObstacleElements();

	void movePlayer();
	void playerJump();
	void initializeBackgroundElements();
	void initializeObstacleElements();

	bool collision(Player* p, Obstacle* o);
	void manageCollisions();
};