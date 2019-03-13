#pragma once

#ifndef GAURD_GAME_STATE_H
#define GAURD_GAME_STATE_H

#include <SFML/Graphics.hpp>

#include "State.h"
#include "../assets/TextureManager.h"
#include "../utils/AssetUtils.h"

class sgf::Game;

class GameState : public sgf::State
{

public:
	GameState(sgf::Game*);

	void tick();
	void render(sf::RenderWindow&);

private:
	sf::CircleShape shape;

};

#endif

