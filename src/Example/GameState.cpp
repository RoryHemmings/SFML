#include <iostream>

#include "GameState.h"

#include "../Game.h"

int x = 0;

GameState::GameState(sgf::Game* game)
	: State(game)
{
	
}

void GameState::tick() {
	x += 1;
}

void GameState::render(sf::RenderWindow& display) {
	sgf::AssetUtils::getInstance().drawImage(display, sgf::TextureManager::getInstance().getTexture("default"), x, 100);
}
