#include "GameObj4.h"

GameObj4::GameObj4()
{
	
}

void GameObj4::update(float dt)
{
	move(velocity * dt);

	sf::Vector2u pos = window->getSize();
	if (getPosition().x + 50 > pos.x)
	{
		velocity.x = -velocity.x;
	}
	else if (getPosition().x < 0)
	{
		velocity.x = -velocity.x;
	}


}

void GameObj4::collisionResponse(GameObject* collider)
{
	velocity.x = -velocity.x;
}

GameObj4::~GameObj4()
{

}
