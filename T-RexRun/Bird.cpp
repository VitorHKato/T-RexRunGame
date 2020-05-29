#include "Bird.h"
using namespace std;

Bird::Bird()
{
	loadSprite();
	sprite.setPosition(1500, 250);
}
Bird::~Bird()
{

}
void Bird::loadSprite()
{
	if (!texture.loadFromFile("Images/Bird.jpg"))
	{
		cout << "Error loading the file." << endl;
	}
	sprite.setTexture(texture);

}