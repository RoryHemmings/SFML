#include "TextureManager.h"

namespace sgf {

	TextureManager::TextureManager() {}

	TextureManager& TextureManager::getInstance() {
		static TextureManager instance;
		return instance;
	}

	int TextureManager::addTexture(const std::string& id, const std::string& path) {
		// TODO add Logging
		sf::Texture texture;

		// Does id already exist
		auto it = textures.find(id);
		if (it != textures.end()) { return -1; }

		// Load texture
		if (!texture.loadFromFile(path)) {
			return -1;
		}

		// Add texture
		textures[id] = texture;
		return 0;
	}

	sf::Texture& TextureManager::getTexture(const std::string& id) {
		auto it = textures.find(id);
		if (it == textures.end()) { 
			return textures["0"];
		}

		return textures[id];
	}

}

