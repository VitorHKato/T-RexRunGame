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
};