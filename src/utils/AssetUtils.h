#pragma once

#ifndef GAURD_ASSET_UTILS_H
#define GAURD_ASSET_UTILS_H

#include <SFML/Graphics.hpp>

namespace sgf {

	class AssetUtils
	{

	public:
		static AssetUtils& getInstance();

		void drawImage(sf::RenderWindow&, sf::Texture, int, int) const;
		void drawImage(sf::RenderWindow&, sf::Texture, int, int, int, int) const;

	private:
		AssetUtils();

	};

}

#endif
