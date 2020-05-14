#include "Engine.h"

Engine::Engine(Dino* player)
{
	this->player = player;
}
Engine::~Engine()
{

}
Dino* Engine::getPlayer()
{
	return player;
}