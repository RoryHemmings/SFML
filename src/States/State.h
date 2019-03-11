#pragma once

#ifndef GAURD_STATE_H
#define GAURD_STATE_H

#include <SFML/Graphics.hpp>

class Game;

class State
{

public:
	State(Game* game) : game(game) {};

	virtual void tick() {};
	virtual void render(sf::RenderWindow& display) {};

protected:
	Game* game;

};

#endif

