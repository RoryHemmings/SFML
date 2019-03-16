#pragma once

#ifndef GAURD_PLAYER_H
#define GAURD_PLAYER_H

#include <SFML/Graphics.hpp>

#include "../../Entitys/Entity.h"

class sgf::Game;

class Player : public sgf::Entity
{
public:

	Player(sgf::Game*, float, float, const sf::Texture&);

	void tick();
	void render(sf::RenderWindow&);
	
};

#endif

