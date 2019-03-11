#include <iostream>

#include "Game.h"

Game::Game(int width, int height, int fps) :
	width(width), height(height), fps(fps), display(sf::VideoMode(width, height), "Game")
{
	display.setFramerateLimit(fps);
}

void Game::run() {
	load();
	std::cout << "Done Loading" << std::endl;
	while (display.isOpen()) {

		sf::Event event;
		while (display.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				display.close();
		}

		tick();
		render();
	}
}

void Game::load() {
	std::cout << "Loading..." << std::endl;
}

void Game::tick() {
	currentState->tick();
}

void Game::render() {
	display.clear(sf::Color::Magenta);

	currentState->render(display);

	display.display();
}







//void Game::loop() {
//	load();
//
//	// Runs Time Control
//	sf::Clock clock;
//	while (display.isOpen()) {
//		sf::Event event;
//		while (display.pollEvent(event))
//		{
//			if (event.type == sf::Event::Closed)
//				display.close();
//		}
//
//		sf::Time delta = clock.getElapsedTime();
//
//		if (delta.asSeconds() >= timePerFrame.asSeconds()) {
//			tick();
//			render();
//
//			clock.restart();
//		}
//	}
//}
