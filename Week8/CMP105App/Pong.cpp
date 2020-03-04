#include "Pong.h"

Pong::Pong()
{
	velocity.x = -200.f;

}

void Pong::update(float dt)
{
	move(velocity * dt);

	sf::Vector2u pos = window->getSize();
	if (getPosition().x + 100 > pos.x)
	{
		setPosition(600, getPosition().y);
	}
	else if (getPosition().x < 0)
	{
		setPosition(600, getPosition().y);
	}

}

void Pong::collisionResponse(GameObject* collider)
{
	velocity.x = -velocity.x;
}

Pong::~Pong()
{

}

