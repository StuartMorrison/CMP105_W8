#pragma once
#include "Framework/GameObject.h"
class GameObj1 :
	public GameObject
{
private:
	sf::RenderWindow* window;
public:
	GameObj1();
	void update(float dt);
	void collisionResponse(GameObject* collider);
	void setWindu(sf::RenderWindow* hwnd) { window = hwnd; };
	~GameObj1();
};

