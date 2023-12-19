#include <SFML/Graphics.hpp>
#include <engine.h>
#include <iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "LostEngine");
    sf::CircleShape shape(100.f,3);
    shape.setFillColor(sf::Color::Red);
    bool isKeyPressed = false;
    float horizontalInput = 0.f;
    float verticalInput = 0.f;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            horizontalInput = LostEngine::GetAxis(event, LostEngine::Horizontal);
            horizontalInput = LostEngine::GetAxis(event, LostEngine::Vertical);
            if (event.type == sf::Event::Closed)
                window.close();
            if (LostEngine::GetKeyDown(event, sf::Keyboard::Space)) {
                std::cout << "space" << std::endl;
            }
        }
        //shape.move(horizontalInput, verticalInput);
        //std::cout << horizontalInput << "\t" << verticalInput << std::endl;
        window.clear(sf::Color::White);
        window.draw(shape);
        window.display();
    }

    return 0;
}