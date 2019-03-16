#include <iostream>

#include "GameState.h"

GameState::GameState(sgf::Game* game)
	: State(game), player(game, 100.0f, 100.0f, GET_TEXTURE("default"))
{
	
}

void GameState::tick() {
	player.tick();
}

void GameState::render(sf::RenderWindow& display) {
	//sgf::AssetUtils::getInstance().drawImage(display, sgf::TextureManager::getInstance().getTexture("default"), x, 100);
	player.render(display);
}
