#include "SFML/Graphics.hpp"
#include "Dino.h"
using namespace sf;

class Engine
{
private:
	Dino* player;
public:
	Engine(Dino* player);
	~Engine();

	Dino* getPlayer();
};