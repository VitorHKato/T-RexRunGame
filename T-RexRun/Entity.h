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
public:
	Entity();
	~Entity();

	virtual void loadSprite(const string arq);
	virtual Vector2f getPosition();
	virtual void setPosition(float x, float y) = 0;
	virtual Sprite getSprite();
};
