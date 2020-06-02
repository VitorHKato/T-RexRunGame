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
	fastMode = false;
	loadSprite("Images/DinoSprites.jpg");
	sprite.setPosition(Vector2f(10, Draw::HEIGHT));
	sprite.setTextureRect(IntRect(0, 0, 22, 27));
}
Dino::~Dino()
{

}
void Dino::setFastMode(bool s)
{
	fastMode = s;
}
void Dino::animation()
{
	frameAnimation++;

	if (frameAnimation == 300)
	{
		frameImage++;
		frameAnimation = 0;

		if (frameImage >= numberOfImages)
			frameImage = 0;
	}

	if (isJumping)
	{
		numberOfImages = 3;
		sprite.setTextureRect(IntRect(23 * frameImage, 27, 22, 27));
	}
	else
	{
		if (fastMode)
		{
			numberOfImages = 2;
			sprite.setTextureRect(IntRect(45 * frameImage, 60, 44, 23));
		}
		else
		{
			numberOfImages = 4;
			sprite.setTextureRect(IntRect(23 * frameImage, 0, 22, 27));
		}
	}


}
