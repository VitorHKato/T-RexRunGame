#include "Entity.h"
#pragma once

class Background : public Entity
{
protected:

public:
	Background();
	~Background();

	virtual void setPosition(float x, float y);
};