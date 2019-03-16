#pragma once

#ifndef GAURD_GAME_STATE_H
#define GAURD_GAME_STATE_H

#include "../../Macros.h"

#include <SFML/Graphics.hpp>

#include "../../Game.h"
#include "../../States/State.h"
#include "../../assets/TextureManager.h"
#include "../../utils/AssetUtils.h"
#include "../Entitys/Player.h"

class sgf::Game;

class GameState : public sgf::State
{

public:
	GameState(sgf::Game*);

	void tick();
	void render(sf::RenderWindow&);

private:
	Player player;

};

#endif

