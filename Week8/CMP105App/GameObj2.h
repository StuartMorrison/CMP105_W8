#pragma once
#include "Framework/GameObject.h"
class GameObj2 :
	public GameObject
{
private:
	sf::RenderWindow* window;
public:
	GameObj2();
	void update(float dt);
	void collisionResponse(GameObject* collider);
	void setWindu(sf::RenderWindow* hwnd) { window = hwnd; };
	~GameObj2();
};

