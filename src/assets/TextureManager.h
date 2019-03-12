#pragma once

#ifndef GAURD_TEXTURE_MANAGER_H
#define GAURD_TEXTURE_MANAGER_H

#include <SFML/Graphics.hpp>

#include <unordered_map>
#include <string>

namespace sgf {

	class TextureManager
	{

	public:
		static TextureManager& getInstance();

		int addTexture(const std::string&, const std::string&);

		sf::Texture& getTexture(const std::string&);

	private:
		TextureManager();

		std::unordered_map<std::string, sf::Texture> textures;
	};

}

#endif
