#include "Player.h"
#pragma once

class Dino : public Player
{
private:
	bool fastMode;
public:
	Dino();
	~Dino();

	void animation();
	void setFastMode(bool s);

};