#include "SFML/Graphics.hpp"
#pragma once
using namespace sf;

class Dino
{
private:
	RectangleShape hitbox;
	bool jump;
	bool isJumping;
	Texture texture;
	Sprite sprite;
public:
	Dino();
	~Dino();

	RectangleShape getHitBox();
	void loadSprite();
	void setPosition(float x, float y);
	Vector2f getPosition();
	void setJump(bool p);
	bool getJump();
	void setIsJumping(bool i);
	bool getIsJumping();
	Sprite getSprite();

};