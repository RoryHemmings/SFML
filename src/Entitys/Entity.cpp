#include <iostream>

#include "Entity.h"

namespace sgf {

	Entity::Entity(Game* game, float x, float y, const sf::Texture& texture) :
		game(game), x(x), y(y), texture(texture)
	{
		sprite.setTexture(texture);
		width = texture.getSize().x;
		height = texture.getSize().y;
	}

	Entity::Entity(Game* game, float x, float y, int width, int height, const sf::Texture& texture) :
		game(game), x(x), y(y), width(width), height(height), texture(texture)
	{
		sprite.setTexture(texture);
		sprite.setScale(width, height);
	}

	void Entity::tick() {
	
	}

	void Entity::render(sf::RenderWindow& display) {
		// ALWAYS UPDATE SPRITE POSITION
		//updateSpritePosition();
	}

}
