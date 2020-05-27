#include "SFML/Graphics.hpp"
#include <iostream>
#pragma once
using namespace sf;

class Obstacle
{
private:
	RectangleShape hitbox;
public:
	Obstacle();
	~Obstacle();

	RectangleShape getHitbox();
	Vector2f getPosition();
	void setPosition(float x, float y);
};