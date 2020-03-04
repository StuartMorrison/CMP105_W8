#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
/*
	ball1Text.loadFromFile("gfx/Beach_Ball.png");

	ball1.setTexture(&ball1Text);
	ball1.setSize(sf::Vector2f(100, 100));
	ball1.setPosition(100, 100);

	ball2.setTexture(&ball1Text);
	ball2.setSize(sf::Vector2f(100, 100));
	ball2.setPosition(800, 100);

	ball1.setWindu(window);
	ball2.setWindu(window);

	square1.setSize(sf::Vector2f(50, 50));
	square1.setCollisionBox(sf::FloatRect(0, 0, 50, 50));
	square1.setPosition(100, 300);
	square1.setVelocity(100, 0);
	square1.setFillColor(sf::Color::Green);

	square2.setSize(sf::Vector2f(50, 50));
	square2.setCollisionBox(sf::FloatRect(0, 0, 50, 50));
	square2.setPosition(800, 300);
	square2.setVelocity(-100, 0);
	square2.setFillColor(sf::Color::Blue);

	square1.setWindu(window);
	square2.setWindu(window);
	*/

	leftPaddle.setSize(sf::Vector2f(50, 200));
	leftPaddle.setCollisionBox(sf::FloatRect(0, 0, 50, 200));
	leftPaddle.setPosition(100, 275);
	leftPaddle.setFillColor(sf::Color::Red);
	leftPaddle.setWindu(window);
	leftPaddle.setInput(input);

	rightPaddle.setSize(sf::Vector2f(50, 200));
	rightPaddle.setCollisionBox(sf::FloatRect(0, 0, 50, 200));
	rightPaddle.setPosition(1100, 275);
	rightPaddle.setFillColor(sf::Color::Red);
	rightPaddle.setWindu(window);
	rightPaddle.setInput(input);

	pong.setSize(sf::Vector2f(20, 20));
	pong.setCollisionBox(sf::FloatRect(0, 0, 20, 20));
	pong.setPosition(600, 275);
	pong.setFillColor(sf::Color::White);
	pong.setWindu(window);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	leftPaddle.handleInput(dt);
	rightPaddle.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	/*ball1.update(dt);
	ball2.update(dt);
	square1.update(dt);
	square2.update(dt);

	if (Collision::checkBoundingCircle(&ball1, &ball2))
	{
		ball1.collisionResponse(NULL);
		ball2.collisionResponse(NULL);
	}

	if (Collision::checkBoundingBox(&square1, &square2))
	{
		square1.collisionResponse(NULL);
		square2.collisionResponse(NULL);
	}*/

	pong.update(dt);
	
	if (Collision::checkBoundingBox(&leftPaddle, &pong))
	{
		pong.collisionResponse(NULL);
	}
	if (Collision::checkBoundingBox(&pong, &rightPaddle))
	{
		pong.collisionResponse(NULL);
	}

}

// Render level
void Level::render()
{
	beginDraw();
	/*window->draw(ball1);
	window->draw(ball2);
	window->draw(square1);
	window->draw(square2);*/
	window->draw(leftPaddle);
	window->draw(rightPaddle);
	window->draw(pong);
	endDraw();
}

// Begins rendering to the back buffer. Background colour set to light blue.
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}