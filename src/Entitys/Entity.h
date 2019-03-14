#pragma once

#ifndef GAURD_ENTITY_H
#define GAURD_ENTITY_H

#include <SFML/Graphics.hpp>

class Game;

namespace sgf {

	class Entity
	{

	public:
		Entity(Game*, float, float, sf::Sprite);
		Entity(Game*, float, float, int, int, sf::Sprite);
		
		// Getters and Setters
		float getX() const { return x; }
		float getY() const { return y; }
		float getWidth() const { return width; }
		float getHeight() const { return height; }

		sf::Sprite getSprite() const { return sprite; }

		void setX(float nx) { x = nx; }
		void setY(float ny) { y = ny; }
		void setWidth(float nwidth) { width = nwidth; }
		void setHeight(float nheight) { height = nheight; }

		void setSprite(const sf::Sprite& s) { sprite = s; }

	private:
		Game* game;

		float x, y;
		int width, height;

		// Rework sprite system to use textures
		sf::Sprite sprite;

	};
}

#endif

