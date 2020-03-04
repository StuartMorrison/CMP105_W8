#include "RightPaddle.h"

RightPaddle::RightPaddle()
{

}

void RightPaddle::handleInput(float dt)
{
	velocity.y = 0.f;
	sf::Vector2u pos = window->getSize();
	if (getPosition().y > 0)
	{
		if (input->isMouseLDown())
		{
			velocity.y = -200.f;
		}
	}

	if (getPosition().y + getSize().y < pos.y)
	{
		if (input->isMouseRDown())
		{
			velocity.y = 200.f;
		}
	}

	move(velocity * dt);


}

RightPaddle::~RightPaddle()
{

}
