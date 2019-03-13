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
	sgf::AssetUtils::getInstance().drawImage(display, sgf::TextureManager::getInstance().getTexture("default"), 100, 100);
}
