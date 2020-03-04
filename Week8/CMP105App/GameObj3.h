#pragma once
#include "Framework/GameObject.h"
class GameObj3 :
	public GameObject
{
private:
	sf::RenderWindow* window;
public:
	GameObj3();
	void update(float dt);
	void collisionResponse(GameObject* collider);
	void setWindu(sf::RenderWindow* hwnd) { window = hwnd; };
	~GameObj3();
};

