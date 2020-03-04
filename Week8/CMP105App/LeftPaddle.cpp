#include "LeftPaddle.h"

LeftPaddle::LeftPaddle()
{

}

void LeftPaddle::handleInput(float dt)
{
	velocity.y = 0.f;
	sf::Vector2u pos = window->getSize();
	if (getPosition().y > 0)
	{
		if (input->isKeyDown(sf::Keyboard::W))
		{
			velocity.y = -200.f;
		}
	}

	if (getPosition().y + getSize().y < pos.y)
	{
		if (input->isKeyDown(sf::Keyboard::S))
		{
			velocity.y = 200.f;
		}
	}

	move(velocity * dt);

}

LeftPaddle::~LeftPaddle()
{

}
