#include "GameObj3.h"

GameObj3::GameObj3()
{

}

void GameObj3::update(float dt)
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

void GameObj3::collisionResponse(GameObject* collider)
{
	velocity.x = -velocity.x;
}

GameObj3::~GameObj3()
{

}
