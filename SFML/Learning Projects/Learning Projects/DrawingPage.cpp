#include "DrawingPage.h"
#include <SFML/Graphics.hpp>

void drawingPage() {

	int width = 1100, height = 700;
	sf::RenderWindow w(sf::VideoMode(width, height), "Drawing Page");
	sf::Sprite stroke;

	//drawing
	bool isDrawing = false;

	//clear screen
	bool clear = false;

	//mouse position
	sf::Vector2i mousePosition;

	//brush or pencil 
	sf::CircleShape brush;
	brush.setFillColor(sf::Color::White);
	brush.setRadius(5);
	brush.setOrigin(sf::Vector2f(2.5f, 2.5f));

	//renderTexture
	sf::RenderTexture renderedTexture;
	renderedTexture.create(width, height);
	renderedTexture.clear(sf::Color::Transparent);


	//texture for board
	sf::Texture boardTexture;
	boardTexture.loadFromFile("Assets/drawingPage/board.jpg");

	//board 
	sf::RectangleShape board;
	board.setSize(sf::Vector2f(width, height));
	board.setTexture(&boardTexture);


	while (w.isOpen()) {

		sf::Event e;
		while (w.pollEvent(e)) {
			if (e.type == sf::Event::Closed) {
				w.close();
			}
			if (e.type == sf::Event::MouseButtonPressed) {
				if (e.mouseButton.button == sf::Mouse::Left) {
					isDrawing = true;
				}
			}
			if (e.type == sf::Event::MouseButtonReleased) {
				if (e.mouseButton.button == sf::Mouse::Left) {
					isDrawing = false;
				}
			}

			//Keyboard
			if (e.type == sf::Event::KeyPressed) {
				if (e.key.code == sf::Keyboard::C) {
					clear = true;
				}
			}
			if (e.type == sf::Event::KeyReleased) {
				if (e.key.code == sf::Keyboard::C) {
					clear = false;
				}
			}
		}


		if (clear == true) {
			renderedTexture.clear(sf::Color::Transparent);
		}
		if (isDrawing == true) {
			mousePosition = sf::Mouse::getPosition(w);
			brush.setPosition(mousePosition.x, mousePosition.y);
			renderedTexture.draw(brush);
		}

		renderedTexture.display();

		stroke.setTexture(renderedTexture.getTexture());

		w.clear();

		w.draw(board);
		w.draw(brush);
		w.draw(stroke);

		w.display();

	}

}