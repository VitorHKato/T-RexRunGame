#include "Entity.h"
#pragma once

class Obstacle : public Entity
{
protected:
	RectangleShape hitbox;
public:
	Obstacle();
	~Obstacle();

	RectangleShape getHitbox();
	void setPosition(float x, float y);
};