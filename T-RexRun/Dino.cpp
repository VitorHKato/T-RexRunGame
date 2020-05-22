#include "Dino.h"
#include "Draw.h"

Dino::Dino()
{
	hitbox.setSize(Vector2f(50, 50));
	hitbox.setFillColor(Color::Green);
	hitbox.setPosition(Vector2f(10, Draw::HEIGHT));
	jump = false;
	isJumping = false;
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
void Dino::setJump(bool p)
{
	jump = p;
}
bool Dino::getJump()
{
	return jump;
}
void Dino::setIsJumping(bool i)
{
	isJumping = i;
}
bool Dino::getIsJumping()
{
	return isJumping;
}