#include "SFML/Graphics.hpp"
#pragma once
using namespace sf;

class Dino
{
private:
	RectangleShape hitbox;
public:
	Dino();
	~Dino();

	RectangleShape getHitBox();
	void setPosition(float x, float y);
	Vector2f getPosition();
};