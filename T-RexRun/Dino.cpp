#include "Dino.h"
#include "Draw.h"
using namespace std;

Dino::Dino()
{
	hitbox.setSize(Vector2f(50, 50));
	hitbox.setFillColor(Color::Green);
	hitbox.setPosition(Vector2f(10, Draw::HEIGHT));
	jump = false;
	isJumping = false;
	loadSprite();
	sprite.setPosition(Vector2f(10, Draw::HEIGHT));
}
Dino::~Dino()
{

}
RectangleShape Dino::getHitBox()
{
	return hitbox;
}
void Dino::loadSprite()
{
	if (!texture.loadFromFile("Images/Dino.jpg"))
	{
		cout << "Error loading the file." << endl;
	}
	sprite.setTexture(texture);
}
void Dino::setPosition(float x, float y)
{
	hitbox.move(Vector2f(x, y));
	sprite.move(Vector2f(x, y));
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
Sprite Dino::getSprite()
{
	return sprite;
}