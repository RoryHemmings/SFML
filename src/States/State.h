#pragma once

#ifndef GAURD_STATE_H
#define GAURD_STATE_H

#include <SFML/Graphics.hpp>

namespace sgf {

	class Game;

	class State
	{

	public:
		State(Game* game) : game(game) {};

		// Make Framerates uncapped
		virtual void tick() {};
		virtual void render(sf::RenderWindow& display) {};

	protected:
		Game* game;

	};

}

#endif

