#pragma once
#include "Framework/GameObject.h"
class RightPaddle :
	public GameObject
{
private: 
	sf::RenderWindow* window;
public:
	RightPaddle();
	void handleInput(float dt);
	void setWindu(sf::RenderWindow* hwnd) { window = hwnd; };
	~RightPaddle();
};

