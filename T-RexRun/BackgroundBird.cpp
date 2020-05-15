#include "BackgroundBird.h"

BackgroundBird::BackgroundBird()
{
	shape.setFillColor(Color::Magenta);
	shape.setRadius(10);
	shape.setPosition(500, 300);
}
BackgroundBird::~BackgroundBird()
{

}
CircleShape BackgroundBird::getShape()
{
	return shape;
}
Vector2f BackgroundBird::getPosition()
{
	return shape.getPosition();
}
void BackgroundBird::setPosition(float x, float y)
{
	shape.setPosition(x, y);
}