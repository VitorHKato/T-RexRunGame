#include "Player.h"

Player::Player()
{
	jump = false;
	isJumping = false;
	isDead = false;
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
	hitbox.setPosition(Vector2f(x, y));
	sprite.setPosition(Vector2f(x, y));
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
void Player::setIsDead(bool d)
{
	isDead = d;
}
bool Player::getIsDead()
{
	return isDead;
}