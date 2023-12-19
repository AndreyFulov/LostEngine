#pragma once
#include <SFML/Graphics.hpp>
void eventHandler();

namespace LostEngine {
	enum Axis {
		Horizontal,
		Vertical
	};
	class GameWindow {
		GameWindow(int height, int width, char title[]);
	};
	class GameObject {
		GameObject(sf::Shape shape, sf::Color color);
		sf::Color color;
	};
	bool GetKeyDown(sf::Event& event,sf::Keyboard::Key key);
	float GetAxis(sf::Event& event, Axis axis);
}