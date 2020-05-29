#include "Cactus.h"
#include "Draw.h"
using namespace std;

Cactus::Cactus()
{
	hitbox.setSize(Vector2f(50, 50));
	hitbox.setFillColor(Color::Magenta);
	hitbox.setPosition(Vector2f(800, Draw::HEIGHT));
	sprite.setPosition(Vector2f(800, Draw::HEIGHT));
	loadSprite("Images/Cactus.jpg");
}
Cactus::~Cactus()
{

}