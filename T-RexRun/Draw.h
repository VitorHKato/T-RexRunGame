#include <stdio.h>
#include "Engine.h"
#include "SFML/Graphics.hpp"
#pragma once
using namespace sf;

class Draw
{
private:
	Event* event;
	RenderWindow* window;
	VideoMode desktop;
	View view;
	Engine* engine;
	int frame;

public:
	static const int HEIGHT;
	static const int WIDTH;

	Draw(Event* event, Engine* engine);
	~Draw();

	void loop(Event* event);
	void CameraControl();
	void ResetScenario();
};