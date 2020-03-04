#include "GameObj2.h"

GameObj2::GameObj2()
{
	velocity.x = -200.f;
	
}

void GameObj2::update(float dt)
{
	move(velocity * dt);

	sf::Vector2u pos = window->getSize();
	if (getPosition().x + 100 > pos.x)
	{
		velocity.x = -velocity.x;
	}
	else if (getPosition().x < 0)
	{
		velocity.x = -velocity.x;
	}

}

void GameObj2::collisionResponse(GameObject* collider)
{
	velocity.x = -velocity.x;
}

GameObj2::~GameObj2()
{

}
