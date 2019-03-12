#include <iostream>

#include "GameState.h"

#include "../Game.h"

GameState::GameState(sgf::Game* game)
	: State(game)
{
	
}

void GameState::tick() {

}

void GameState::render(sf::RenderWindow& display) {
	sf::Sprite sprite;
	sprite.setTexture(sgf::TextureManager::getInstance().getTexture("default"));
	sprite.setScale(10, 10);
	display.draw(sprite);
}
