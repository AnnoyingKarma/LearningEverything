#include <SFML/Graphics.hpp>
#include <iostream>

int main() {

	sf::RenderWindow w(sf::VideoMode(800,400),"Game Mechanics");
	
	while (w.isOpen()) {
		sf::Event e;
		while (e.type == sf::Event::Closed) {

		}

		w.clear();

		w.display();

	}

	return 0;

}