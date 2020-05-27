#include "Obstacle.h"
#include "Draw.h"

Obstacle::Obstacle()
{
	hitbox.setSize(Vector2f(50, 50));
	hitbox.setFillColor(Color::Magenta);
	hitbox.setPosition(Vector2f(200, Draw::HEIGHT));
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
}