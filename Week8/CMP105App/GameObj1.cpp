#include "GameObj1.h"

GameObj1::GameObj1()
{
	velocity.x = 100.f;
}

void GameObj1::update(float dt)
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

void GameObj1::collisionResponse(GameObject* collider)
{
	velocity.x = -velocity.x;
}

GameObj1::~GameObj1()
{

}
