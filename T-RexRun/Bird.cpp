#include "Bird.h"
using namespace std;

Bird::Bird()
{
	loadSprite("Images/Bird.jpg");
	initialPositionX = 1500;
	initialPositionY = 250;
	setPosition(initialPositionX, initialPositionY);
}
Bird::~Bird()
{

}
void Bird::animation()
{

}