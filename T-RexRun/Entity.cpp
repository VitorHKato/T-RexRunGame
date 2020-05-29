#include "Entity.h"

Entity::Entity()
{

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