#pragma once
#include "Framework/GameObject.h"
class LeftPaddle :
	public GameObject
{
private:
	sf::RenderWindow* window;
public:
	LeftPaddle();
	void handleInput(float dt);
	void setWindu(sf::RenderWindow* hwnd) { window = hwnd; };
	~LeftPaddle();
};

