#include "Obstacle.h"
#include "Draw.h"
using namespace std;

Obstacle::Obstacle()
{

}
Obstacle::~Obstacle()
{

}
RectangleShape Obstacle::getHitbox()
{
	return hitbox;
}
void Obstacle::setPosition(float x, float y)
{
	hitbox.setPosition(x, y);
	sprite.setPosition(x, y);
}