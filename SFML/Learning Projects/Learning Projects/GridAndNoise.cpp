#include "GridAndNoise.h"
#include<SFML/Graphics.hpp>
#include <iostream>


void gridAndNoise() {
	int width = 600, height = 600;
	sf::RenderWindow w(sf::VideoMode(width,height),"gridAndNosie");
	w.setVerticalSyncEnabled(true);

	int gridSize = width /20;

	std::vector<std::vector<sf::RectangleShape>> grid(gridSize,std::vector<sf::RectangleShape>(gridSize));

	for (int i = 0; i < gridSize; i++) {
		for (int j = 0; j < gridSize; j++) {
			int r = rand() % 256, g = rand() % 256, b = rand() % 256;
			grid[i][j].setPosition(j*gridSize,i*gridSize);
			grid[i][j].setSize(sf::Vector2f(30,30));
			grid[i][j].setFillColor(sf::Color(r,g,b));
		}
	}
	

	while (w.isOpen()) {
		sf::Event e;
		while (w.pollEvent(e)) {
			if (e.type == sf::Event::Closed) {
				w.close();
			}
			//event

		}
		
		//logic

		w.clear();
		
		for (int i = 0; i < gridSize; i++) {
			for (int j = 0; j < gridSize; j++) {
				w.draw(grid[i][j]);
			}
		}

		w.display();

	}

}