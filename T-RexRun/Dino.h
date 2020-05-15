#include "SFML/Graphics.hpp"
using namespace sf;

class Dino
{
private:
	RectangleShape hitbox;
public:
	Dino();
	~Dino();

	RectangleShape getHitBox();
	void setPosition(float x, float y);
};