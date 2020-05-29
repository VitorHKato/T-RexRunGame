#include "SFML/Graphics.hpp"
#include <iostream>
using namespace sf;

class Entity
{
protected:
	Texture texture;
	Sprite sprite;
public:
	Entity();
	~Entity();

	virtual void loadSprite() = 0;
	virtual Vector2f getPosition();
	virtual void setPosition(float x, float y) = 0;
	virtual Sprite getSprite();
};
