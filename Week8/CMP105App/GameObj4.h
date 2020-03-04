#pragma once
#include "Framework/GameObject.h"
class GameObj4 :
	public GameObject
{
private:
	sf::RenderWindow* window;
public:
	GameObj4();
	void update(float dt);
	void collisionResponse(GameObject* collider);
	void setWindu(sf::RenderWindow* hwnd) { window = hwnd; };
	~GameObj4();
};
