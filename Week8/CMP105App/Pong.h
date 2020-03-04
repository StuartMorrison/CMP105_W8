#pragma once
#include "Framework/GameObject.h"
class Pong :
	public GameObject
{
private:
	sf::RenderWindow* window;
public:
	Pong();
	void update(float dt);
	void collisionResponse(GameObject* collider);
	void setWindu(sf::RenderWindow* hwnd) { window = hwnd; };
	~Pong();
};

