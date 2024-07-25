#include "collision.h"
#include <iostream>
#include <SFML/Graphics.hpp>

void collision() {
	
	sf::RenderWindow window(sf::VideoMode(800,600),"Collision");
	window.setVerticalSyncEnabled(true);

	//bools
	bool upward=false, downward=false, right=false, left=false;
	//speed
	float xSpeed = 0,ySpeed=0;

	//radius
	float radius = 30.0f;

	//sumofRadius
	float sumOfRadius = 3600;

	//circles
	sf::CircleShape circle1;
	circle1.setFillColor(sf::Color::Green);
	circle1.setRadius(radius);
	circle1.setPosition(60,60);
	circle1.setOrigin(50,50);
	sf::CircleShape circle2;
	circle2.setFillColor(sf::Color::Magenta);
	circle2.setRadius(radius);
	circle2.setPosition(400, 300);
	circle2.setOrigin(50,50);

	//rectangles
	sf::RectangleShape rect1;
	rect1.setFillColor(sf::Color::Red);
	sf::RectangleShape rect2;
	rect2.setFillColor(sf::Color::Cyan);



	while (true) {

		sf::Event e;

		while (window.pollEvent(e)) {
			if (sf::Event::Closed == e.type) {
				window.close();
			}
			//events
			if (e.type == sf::Event::KeyPressed) {
				if (e.key.code == sf::Keyboard::W) {
					upward = true;
				}
				if (e.key.code == sf::Keyboard::S) {
					downward = true;
				}
				if (e.key.code == sf::Keyboard::A) {
					left = true;
				}
				if (e.key.code == sf::Keyboard::D) {
					right = true;
				}
			}

			if (e.type == sf::Event::KeyReleased) {
				if (e.key.code == sf::Keyboard::W) {
					upward = false;
				}
				if (e.key.code == sf::Keyboard::S) {
					downward = false;
				}
				if (e.key.code == sf::Keyboard::A) {
					left = false;
				}
				if (e.key.code == sf::Keyboard::D) {
					right = false;
				}
			}
		}

		//movements
		if (upward) {
			ySpeed = -5.0f;
		}
		if (downward) {
			ySpeed = 5.0f;
		}
		if (right) {
			xSpeed = 5.0f;
		}
		if (left) {
			xSpeed = -5.0f;
		}
		if (upward && downward) {
			ySpeed = 0.0f;
		}
		if (left && right) {
			xSpeed = 0.0f;
		}
		if (!upward && !downward) {
			ySpeed = 0.0f;
		}
		if (!left && !right) {
			xSpeed = 0.0f;
		}
		

		//movement
		circle1.move(xSpeed,ySpeed);
		//collisions

		std::pair<float, float> circle1Position = { circle1.getPosition().x, circle1.getPosition().y };
		std::pair<float, float> circle2Position = { circle2.getPosition().x, circle2.getPosition().y };
		std::pair<float, float> thirdPosition = { circle1.getPosition().x, circle2.getPosition().y };

		float distanceSquare1 = std::pow((circle1Position.first - thirdPosition.first),2);
		float distanceSquare2 = std::pow((circle1Position.second - thirdPosition.second), 2);
		float distanceSum1 = distanceSquare1 + distanceSquare2;
		float distance1 = std::sqrt(distanceSum1);

		float distanceSquare3 = std::pow((circle2Position.first - thirdPosition.first), 2);
		float distanceSquare4 = std::pow((circle2Position.second - thirdPosition.second), 2);
		float distanceSum2 = distanceSquare3 + distanceSquare4;
		float distance2 = std::sqrt(distanceSum2);

		float hypotenuse = ((std::pow(distance1, 2)) + (std::pow(distance2, 2)));
		

		if (hypotenuse < sumOfRadius && (upward == true || downward == true)) {
			circle1.move(0, -ySpeed);
		}
		if (hypotenuse < sumOfRadius && (left == true || right == true)) {
			circle1.move(-xSpeed, 0);
		}
		

		window.clear();

		window.draw(circle1);
		window.draw(circle2);

		window.display();

	}


}