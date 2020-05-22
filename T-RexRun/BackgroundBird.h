#include "SFML/Graphics.hpp"
#include <iostream>
using namespace sf;

class BackgroundBird
{
private:
	CircleShape shape;
	Texture texture;
	Sprite sprite;
public:
	BackgroundBird();
	~BackgroundBird();

	CircleShape getShape();
	void loadSprite();
	Vector2f getPosition();
	void setPosition(float x, float y);
	Sprite getSprite();
};