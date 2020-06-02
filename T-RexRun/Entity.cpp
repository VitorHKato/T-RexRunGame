#include "Entity.h"

Entity::Entity()
{
	frameAnimation = 0;
	frameImage = 0;
	numberOfImages = 0;
}
Entity::~Entity()
{

}
Vector2f Entity::getPosition()
{
	return sprite.getPosition();
}
Sprite Entity::getSprite()
{
	animation();
	return sprite;
}
void Entity::loadSprite(const string arq)
{
	if (!texture.loadFromFile(arq))
	{
		cout << "Error loading the file." << endl;
	}
	sprite.setTexture(texture);
}