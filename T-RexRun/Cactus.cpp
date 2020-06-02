#include "Cactus.h"
#include "Draw.h"
using namespace std;

Cactus::Cactus()
{
	hitbox.setSize(Vector2f(40, 48));
	hitbox.setFillColor(Color::Magenta);
	hitbox.setPosition(Vector2f(800, Draw::HEIGHT));
	sprite.setPosition(Vector2f(800, Draw::HEIGHT));
	sprite.setTextureRect(IntRect(5, 0, 40, 48));
	loadSprite("Images/Cactus.jpg");
}
Cactus::~Cactus()
{

}
void Cactus::animation()
{

}