#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include <string>
#include <iostream>
#include "GameObj1.h"
#include "GameObj2.h"
#include "GameObj3.h"
#include "GameObj4.h"
#include "LeftPaddle.h"
#include "RightPaddle.h"
#include "Pong.h"
#include "Framework/Collision.h"


class Level {
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt);
	void update(float dt);
	void render();

private:
	// Default functions for rendering to the screen.
	void beginDraw();
	void endDraw();

	// Default variables for level class.
	sf::RenderWindow* window;
	Input* input;
	/*
		GameObj1 ball1;
		sf::Texture ball1Text;

		GameObj2 ball2;

		GameObj3 square1;
		GameObj4 square2;
		*/

	LeftPaddle leftPaddle;
	RightPaddle rightPaddle;
	Pong pong;
};