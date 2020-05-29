#include "Player.h"

Player::Player()
{

}
Player::~Player()
{

}
RectangleShape Player::getHitBox()
{
	return hitbox;
}
void Player::setPosition(float x, float y)
{
	hitbox.move(Vector2f(x, y));
	sprite.move(Vector2f(x, y));
}
void Player::setJump(bool p)
{
	jump = p;
}
bool Player::getJump()
{
	return jump;
}
void Player::setIsJumping(bool i)
{
	isJumping = i;
}
bool Player::getIsJumping()
{
	return isJumping;
}