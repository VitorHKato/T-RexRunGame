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