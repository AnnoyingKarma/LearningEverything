#include <SFML/Graphics.hpp>
#include <iostream>

int main() {

	int height = 700;
	int width = 1200;

	sf::RenderWindow w(sf::VideoMode(width,height),"Game Mechanics");

	sf::RectangleShape rect(sf::Vector2f(100.0f,100.0f));
	rect.setFillColor(sf::Color(100,150,110));
	rect.setOrigin(sf::Vector2f(50.0f,50.0f));
	rect.setPosition(sf::Vector2f(400,300));

	sf::RectangleShape object(sf::Vector2f(200, 150));
	object.setPosition(200, 100);
	object.setFillColor(sf::Color(200,50,50));

	bool play = true, left = false, right = false, up = false, down = false, rotate = false;
	float xVelocity = 0.0f;
	float yVelocity = 0.0f;
	float rSpeed = 0.1f;


	while (play==true) {
		sf::Event e;


		while (w.pollEvent(e)) {

			 if (e.type == sf::Event::Closed) {
				 play = false;
			 }

			 if (sf::Event::KeyPressed == e.type) {

				if (e.key.code == sf::Keyboard::R) {
					rotate = true;
				}
				if (e.key.code == sf::Keyboard::W) {
					up = true;
				}
				if (e.key.code == sf::Keyboard::S) {
					down = true;
				}
				if (e.key.code == sf::Keyboard::A) {
					left = true;
				}
				if (e.key.code == sf::Keyboard::D) {
					right = true;
				}


			 }

			 if (e.type == sf::Event::KeyReleased) {
				 
				 if (e.key.code == sf::Keyboard::R) {
					 rotate = false;
				 }
				 if (e.key.code == sf::Keyboard::W) {
					 up = false;
				 }
				 if (e.key.code == sf::Keyboard::S) {
					 down = false;
				 }
				 if (e.key.code == sf::Keyboard::A) {
					 left = false;
				 }
				 if (e.key.code == sf::Keyboard::D) {
					 right = false;
				 }

			 }
		}

		if (rotate == true) {
			rect.rotate(rSpeed);
		}
		if (up == true) {
			yVelocity = -0.2f;
		}
		if(down==true){
			yVelocity = 0.2f;
		}
		if (left == true) {
			xVelocity = -0.2f;
		}
		if (right == true) {
			xVelocity = 0.2f;
		}
		if (right == true && left == true) {
			xVelocity = 0.0f;
		}
		if (right == false && left == false) {
			xVelocity = 0.0f;
		}
		if (up == true && down == true) {
			yVelocity = 0.0f;
		}
		if (up == false && down == false) {
			yVelocity = 0.0f;
		}

		rect.move(xVelocity,0);
		if (rect.getGlobalBounds().intersects(object.getGlobalBounds())) {
			rect.move(-xVelocity,0);
		}
		rect.move(0,yVelocity);
		if (rect.getGlobalBounds().intersects(object.getGlobalBounds())) {
			rect.move(0,-yVelocity);
		}


		w.clear(sf::Color(229,204,255));

		w.draw(rect);
		w.draw(object);
		
		w.display();

	}

	return 0;
}