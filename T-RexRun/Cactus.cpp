#include "Cactus.h"
#include "Draw.h"
using namespace std;

Cactus::Cactus()
{
	hitbox.setSize(Vector2f(40, 48));
	hitbox.setFillColor(Color::Magenta);
	initialPositionX = 800;
	initialPositionY = Draw::HEIGHT;
	setPosition(initialPositionX, initialPositionY);
	sprite.setTextureRect(IntRect(5, 0, 40, 48));
	loadSprite("Images/Cactus.jpg");
}
Cactus::~Cactus()
{

}
void Cactus::animation()
{

}