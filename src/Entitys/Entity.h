#pragma once

#ifndef GAURD_ENTITY_H
#define GAURD_ENTITY_H

#include <SFML/Graphics.hpp>

namespace sgf {

	class Game;

	class Entity
	{

	public:
		Entity(Game*, float, float, const sf::Texture&);
		Entity(Game*, float, float, int, int, const sf::Texture&);

		virtual void tick();
		virtual void render(sf::RenderWindow&);
		
		// Getters and Setters
		float getX() const { return x; }
		float getY() const { return y; }
		float getWidth() const { return width; }
		float getHeight() const { return height; }

		sf::Sprite getSprite() const { return sprite; }
		sf::Texture getTexture() const { return texture; }

		void setX(float nx) { x = nx; }
		void setY(float ny) { y = ny; }
		void setWidth(float nwidth) { width = nwidth; }
		void setHeight(float nheight) { height = nheight; }

		void setTexture(const sf::Texture& t) { texture = t; }

	protected:
		Game* game;

		float x, y;
		int width, height;

		// Textures
		sf::Texture texture;
		sf::Sprite sprite;

	protected:
		void updateSpritePosition() {
			sprite.setPosition(x, y);
		}

	};
}

#endif

