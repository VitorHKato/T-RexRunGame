#include "SFML/Graphics.hpp"
#include <iostream>
using namespace sf;

class BackgroundBird
{
private:
	CircleShape shape;
public:
	BackgroundBird();
	~BackgroundBird();

	CircleShape getShape();
	Vector2f getPosition();
	void setPosition(float x, float y);
};