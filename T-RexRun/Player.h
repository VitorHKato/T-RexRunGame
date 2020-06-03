#include "Entity.h"
#pragma once

class Player : public Entity
{
protected:
	RectangleShape hitbox;
	bool jump;
	bool isJumping;
	bool isDead;
public:
	Player();
	~Player();

	RectangleShape getHitBox();
	void setPosition(float x, float y);
	void setJump(bool p);
	bool getJump();
	void setIsJumping(bool i);
	bool getIsJumping();
	void setIsDead(bool d);
	bool getIsDead();
};