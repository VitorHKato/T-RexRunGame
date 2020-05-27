#include "Obstacle.h"
#include "Draw.h"
using namespace std;

Obstacle::Obstacle()
{
	hitbox.setSize(Vector2f(50, 50));
	hitbox.setFillColor(Color::Magenta);
	hitbox.setPosition(Vector2f(800, Draw::HEIGHT));
	sprite.setPosition(Vector2f(800, Draw::HEIGHT));
	loadSprite();
}
Obstacle::~Obstacle()
{

}
RectangleShape Obstacle::getHitbox()
{
	return hitbox;
}
Vector2f Obstacle::getPosition()
{
	return hitbox.getPosition();
}
void Obstacle::setPosition(float x, float y)
{
	hitbox.setPosition(x, y);
	sprite.setPosition(x, y);
}
void Obstacle::loadSprite()
{
	if (!texture.loadFromFile("Images/Cactus.jpg"))
	{
		cout << "Error loading the file." << endl;
	}
	sprite.setTexture(texture);
}
Sprite Obstacle::getSprite()
{
	return sprite;
}