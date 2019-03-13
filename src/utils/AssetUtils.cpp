#include "AssetUtils.h"

#include <SFML/Graphics.hpp>

namespace sgf {

	AssetUtils::AssetUtils() {}

	AssetUtils& AssetUtils::getInstance() {
		static AssetUtils instance;
		return instance;
	}

	void AssetUtils::drawImage(sf::RenderWindow& display, sf::Texture texture, int x, int y) const  {
		sf::Sprite temp;
		temp.setTexture(texture);
		temp.setOrigin(-x, -y);
		display.draw(temp);
	}

	void AssetUtils::drawImage(sf::RenderWindow& display, sf::Texture texture, int x, int y, int width, int height) const {
		sf::Sprite temp;
		temp.setTexture(texture);
		temp.setScale(width, height);
		temp.setOrigin(-x, -y);
		display.draw(temp);
	}

}
