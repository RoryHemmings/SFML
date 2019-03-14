#include "Entity.h"

namespace sgf {

	Entity::Entity(Game* game, float x, float y, sf::Sprite sprite) :
		game(game), x(x), y(y), sprite(sprite)
	{

	}

	Entity::Entity(Game* game, float x, float y, int width, int height, sf::Sprite sprite) :
		game(game), x(x), y(y), width(width), height(height), sprite(sprite)
	{

	}

}
