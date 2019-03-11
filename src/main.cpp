#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include "Game.h"
#include "States/GameState.h"

int main() {
	Game game(1200, 800, 60);

	GameState gameState(&game);
	game.setCurrentState(gameState);

	game.run();

	//system("pause");
	return 0;
}

//int main()
//{	
//	Game game(900, 600);
//	std::cout << game.getWidth() << std::endl;
//	float x = 0;
//	sf::RenderWindow window(sf::VideoMode(900, 600), "Game");
//	sf::CircleShape shape(30.f);
//	shape.setFillColor(sf::Color::Red);
//	shape.setOutlineColor(sf::Color::White);
//
//	while (window.isOpen())
//	{
//		sf::Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == sf::Event::Closed)
//				window.close();
//		}
//
//		window.clear();
//		x -= 0.1;
//		shape.setOrigin(x, 10.0f);
//		window.draw(shape);
//		window.display();
//	}
//
//	return 0;
//}