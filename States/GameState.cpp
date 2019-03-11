#include <iostream>

#include "GameState.h"

#include "../Game.h"

GameState::GameState(Game* game)
	: State(game), shape(30.0f)
{
	shape.setFillColor(sf::Color::Blue);
}

void GameState::tick() {

}

void GameState::render(sf::RenderWindow& display) {
	shape.setOrigin(-(game->getWidth() / 2) + (shape.getRadius() / 2), -(game->getHeight() / 2) + (shape.getRadius() / 2));
	display.draw(shape);
}
