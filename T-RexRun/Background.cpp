#include "Background.h"

Background::Background()
{

}
Background::~Background()
{

}
void Background::setPosition(float x, float y)
{
	sprite.setPosition(Vector2f(x, y));
}