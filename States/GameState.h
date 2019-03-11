#pragma once

#ifndef GAURD_GAME_STATE_H
#define GAURD_GAME_STATE_H

#include <SFML/Graphics.hpp>

#include "State.h"

class Game;

class GameState : public State
{

public:
	GameState(Game*);

	void tick();
	void render(sf::RenderWindow&);

private:
	sf::CircleShape shape;

};

#endif

