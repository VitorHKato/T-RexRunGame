#include "Entity.h"

class Background : public Entity
{
protected:

public:
	Background();
	~Background();

	virtual void setPosition(float x, float y);
};