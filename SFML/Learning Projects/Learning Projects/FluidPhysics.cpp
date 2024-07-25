#include "FluidPhysics.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <iomanip>

float checkCollision(sf::CircleShape circle1,sf::CircleShape circle2) {
	std::pair<float, float> circle1Position = { circle1.getPosition().x, circle1.getPosition().y };
	std::pair<float, float> circle2Position = { circle2.getPosition().x, circle2.getPosition().y };
	std::pair<float, float> thirdPosition = { circle1.getPosition().x, circle2.getPosition().y };

	float distanceSquare1 = std::pow((circle1Position.first - thirdPosition.first), 2);
	float distanceSquare2 = std::pow((circle1Position.second - thirdPosition.second), 2);
	float distanceSum1 = distanceSquare1 + distanceSquare2;
	float distance1 = std::sqrt(distanceSum1);

	float distanceSquare3 = std::pow((circle2Position.first - thirdPosition.first), 2);
	float distanceSquare4 = std::pow((circle2Position.second - thirdPosition.second), 2);
	float distanceSum2 = distanceSquare3 + distanceSquare4;
	float distance2 = std::sqrt(distanceSum2);

	float hypotenuse = ((std::pow(distance1, 2)) + (std::pow(distance2, 2)));

	return hypotenuse;
}

void fluidPhysics() {
	sf::RenderWindow w(sf::VideoMode(800,600),"Fluid sim");
	w.setVerticalSyncEnabled(true);

	//frames
	int frames=0;
	//deltaTime
	float deltaTime=0;
	//collison damping
	double collisonDamping = 0.4f;
	//threshold
	float threshold = 0.4;

	//MouseButton
	bool rmb = false,lmb=false;
	//collision check
	bool collision = false;
	//clear
	bool clear=false;

	//gravity 
	float gravity=0.1f;
	//velocities
	std::vector<sf::Vector2f> velocities;

	//waterFluid 
	float radius=3.0f;
	sf::CircleShape circle(radius);
	circle.setFillColor(sf::Color::Blue);
	circle.setOrigin(radius,radius);
	//object for collision
	sf::RectangleShape rectangle(sf::Vector2f(7,7));

	// radiusPower
	float radiusPower = 0.1;

	//vector to store circle shapes
	std::vector<sf::CircleShape> circles;
	//vector to store rectangles
	std::vector<sf::RectangleShape> rectangles;
	sf::Event e;
	sf::Clock clock;

	while (w.isOpen()) {

		while (w.pollEvent(e)) {
			if (e.type == sf::Event::Closed) {
				w.close();
			}
			//events
			if (e.type == sf::Event::MouseButtonPressed) {
				if (e.mouseButton.button == sf::Mouse::Left) {
					rmb = true;
				}
				if (e.mouseButton.button == sf::Mouse::Right) {
					lmb = true;
				}

			}
			if (e.type == sf::Event::MouseButtonReleased) {
				if (e.mouseButton.button == sf::Mouse::Left) {
					rmb = false;
				}
				if (e.mouseButton.button == sf::Mouse::Right) {
					lmb = false;
				}
			}
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
		// logic
		if (rmb == true) {
			circle.setPosition(sf::Mouse::getPosition(w).x,sf::Mouse::getPosition(w).y);
			circles.push_back(circle);
			velocities.emplace_back(0.0f,0.0f);
		}
		if (lmb == true) {
			rectangle.setPosition(sf::Mouse::getPosition(w).x,sf::Mouse::getPosition(w).y);
			rectangles.push_back(rectangle);
		}
		
		for (size_t i = 0; i < circles.size(); ++i) {
			velocities[i].y += gravity*deltaTime;
			sf::Vector2f position = circles[i].getPosition();
			position += velocities[i];
			circles[i].setPosition(position);

			for (const auto& rect : rectangles) {
				if (rect.getGlobalBounds().intersects(circles[i].getGlobalBounds())) {
					velocities[i].y = -velocities[i].y*collisonDamping; // Reset vertical velocity
					circles[i].move(velocities[i]);
					if (std::abs(velocities[i].y) < threshold) velocities[i].y = 0.0f;
										
				}
			}

			if (circles[i].getPosition().y > 700 || circles[i].getPosition().y < -100) {
				std::swap(circles[i],circles[circles.size()-1]);
				std::swap(velocities[i].y, velocities[velocities.size() - 1].y);
				circles.pop_back();
				velocities.pop_back();
			}
		}
		/*
		for (size_t i = 0; i < circles.size(); ++i) {
			for (size_t j = 0; j < circles.size(); ++j) {
				float hypotenuse = checkCollision(circles[i],circles[j]);
				if (hypotenuse < 36) {
					// still understanding how to do it !!! hahahaha
				}
			}
		}
		*/

		

		if (clear) {
			circles.clear();
			rectangles.clear();
		}

		w.clear();

		for (auto& rectangle : rectangles) {
			w.draw(rectangle);
		}
		for (auto& circle : circles) {
			w.draw(circle);
		}

		w.display();

		sf::Time time = clock.getElapsedTime();
		clock.restart();
		float t = time.asMilliseconds();
		++frames;
		if (frames >= 60) {
			deltaTime = t / 60;
			frames = 0;
		}
	}



}
