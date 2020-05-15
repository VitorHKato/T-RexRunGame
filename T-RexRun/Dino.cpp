#include "Dino.h"

Dino::Dino()
{
	hitbox.setSize(Vector2f(50, 50));
	hitbox.setFillColor(Color::Green);
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