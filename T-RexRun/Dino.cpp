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
	loadSprite("Images/Dino.jpg");
	sprite.setPosition(Vector2f(10, Draw::HEIGHT));
}
Dino::~Dino()
{

}
