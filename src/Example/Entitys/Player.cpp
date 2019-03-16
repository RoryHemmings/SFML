#include <iostream>

#include "Player.h"

Player::Player(sgf::Game* game, float x, float y, const sf::Texture& texture) :
	sgf::Entity(game, x, y, texture)
{

}

void Player::tick() {
	
}

void Player::render(sf::RenderWindow& display) {
	updateSpritePosition();

	display.draw(sprite);
}
