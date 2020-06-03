#include "SFML/Graphics.hpp"
#include <iostream>
#pragma once
using namespace sf;
using namespace std;

class Entity
{
protected:
	Texture texture;
	Sprite sprite;
	int frameAnimation;		//frame counter to switch animation image
	int frameImage;			//number of the actual image 
	int numberOfImages;		//number of images to do the action
	float initialPositionX;
	float initialPositionY;
public:
	Entity();
	~Entity();

	virtual void loadSprite(const string arq);
	virtual Vector2f getPosition();
	virtual void setPosition(float x, float y) = 0;
	virtual Sprite getSprite();
	virtual void animation() = 0;

	virtual float getInitialPositionX();
	virtual float getInitialPositionY();
};
