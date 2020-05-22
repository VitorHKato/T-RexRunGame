#include "BackgroundBird.h"
using namespace std;

BackgroundBird::BackgroundBird()
{
	shape.setFillColor(Color::Magenta);
	shape.setRadius(10);
	shape.setPosition(1500, 250);
	loadSprite();
	sprite.setPosition(1500, 250);
}
BackgroundBird::~BackgroundBird()
{

}
CircleShape BackgroundBird::getShape()
{
	return shape;
}
void BackgroundBird::loadSprite()
{
	if (!texture.loadFromFile("Images/Bird.jpg"))
	{
		cout << "Error loading the file." << endl;
	}
	sprite.setTexture(texture);

}
Vector2f BackgroundBird::getPosition()
{
	return shape.getPosition();
}
void BackgroundBird::setPosition(float x, float y)
{
	shape.setPosition(x, y);
	sprite.setPosition(x, y);
}
Sprite BackgroundBird::getSprite()
{
	return sprite;
}