#include <engine.h>
bool LostEngine::GetKeyDown(sf::Event& event,sf::Keyboard::Key key) {
	bool result = false;
	if (event.key.scancode == key) {
		switch (event.type)
		{
		case sf::Event::KeyPressed:
			result = true;
			break;
		case sf::Event::KeyReleased:
			result = false;
		default:
			break;
		}
		return result;
	}
	else {
		return result;
	}
}

float LostEngine::GetAxis(sf::Event& event,LostEngine::Axis axis) {
	float result = 0.f;
	switch (axis) {
	case LostEngine::Axis::Horizontal:
		if (LostEngine::GetKeyDown(event, sf::Keyboard::D)) {
			return 1.f;
		}
		else if (LostEngine::GetKeyDown(event, sf::Keyboard::A)) {
			return -1.f;
		}
		break;
	case LostEngine::Axis::Vertical:
		if (LostEngine::GetKeyDown(event, sf::Keyboard::W)) {
			return 1.f;
		}
		else if (LostEngine::GetKeyDown(event, sf::Keyboard::S)) {
			return -1.f;
		}
		break;
	default:
		break;
	}
	return result;
}
