#include "Dino.h"
#include "Draw.h"

Dino::Dino()
{
	hitbox.setSize(Vector2f(50, 50));
	hitbox.setFillColor(Color::Green);
	hitbox.setPosition(Vector2f(0, Draw::HEIGHT));
}
Dino::~Dino()
{

}
RectangleShape Dino::getHitBox()
{
	return hitbox;

}
void Dino::setPosition(float x, float y)
{
	hitbox.move(Vector2f(x, y));
}
Vector2f Dino::getPosition()
{
	return hitbox.getPosition();
}