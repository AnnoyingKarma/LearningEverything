#include "Prac1.h"
#include <SFML/Graphics.hpp>
#include <iostream>

//speed
float circleSpeedX[3] = { 1.0f,3.0f,4.0f };
float circleSpeedY[3] = { 2.0f,1.0f,4.0f };
float rectSpeedX[3] = { 2.0f,3.0f,5.0f };
float rectSpeedY[3] = { 3.0f, 2.0f, 1.0f };

int width = 800;
int height = 600;

static const void collision(sf::RectangleShape& object, int i){
	if (object.getPosition().x > width-(object.getSize().x/2) || object.getPosition().x < object.getSize().x/2) {
		rectSpeedX[i] = -rectSpeedX[i];
	}
	if (object.getPosition().y > height-(object.getSize().y/2) || object.getPosition().y < object.getSize().y/2) {
		rectSpeedY[i] = -rectSpeedY[i];
	}

}

static const void collision(sf::CircleShape& object, int i) {
	if (object.getPosition().x > width-object.getRadius() || object.getPosition().x < object.getRadius()) {
		circleSpeedX[i] = -circleSpeedX[i];
	}
	if (object.getPosition().y > height-object.getRadius() || object.getPosition().y < object.getRadius()) {
		circleSpeedY[i] = -circleSpeedY[i];
	}

}

static const void update(sf::RectangleShape& object, sf::Text& text, int i) {
	collision(object, i);
	object.move(rectSpeedX[i], rectSpeedY[i]);
	text.move(rectSpeedX[i], rectSpeedY[i]);
}

static const void update(sf::CircleShape& object, sf::Text& text, int i) {
	collision(object, i);
	object.move(circleSpeedX[i], circleSpeedY[i]);
	text.move(circleSpeedX[i], circleSpeedY[i]);
}

static const sf::Text setText(sf::CircleShape object, sf::Font& font, std::string name) {
	sf::Text text;
	text.setFont(font);
	text.setString(name);
	text.setCharacterSize(20);
	text.setOrigin(text.getLocalBounds().left + text.getLocalBounds().width / 2, text.getLocalBounds().top + text.getLocalBounds().height / 2);
	text.setPosition(object.getPosition());
	text.setFillColor(sf::Color::Black);
	return text;
}

static const sf::Text setText(sf::RectangleShape object, sf::Font& font, std::string name) {
	sf::Text text;
	text.setFont(font);
	text.setString(name);
	text.setCharacterSize(20);
	text.setOrigin(text.getLocalBounds().left + text.getLocalBounds().width / 2, text.getLocalBounds().top + text.getLocalBounds().height / 2);
	text.setPosition(object.getPosition());
	text.setFillColor(sf::Color::Black);
	return text;
}

static const sf::RectangleShape createRect(float width,float height, sf::Color color) {
	int randomX = std::rand() % (int(width)-300) + 150;
	int randomY = std::rand() % (int(height)-300) + 150;
	sf::RectangleShape rect;
	rect.setPosition(randomX,randomY);
	rect.setSize(sf::Vector2f(width,height));
	rect.setOrigin(width/2,height/2);
	rect.setFillColor(color);
	return rect;
}

static const sf::CircleShape createCircle(float radius,sf::Color color) {
	int randomX = std::rand() % (int(width)-300) + 150;
	int randomY = std::rand() % (int(height)-300) + 150;
	sf::CircleShape circle;
	circle.setPosition(randomX, randomY);
	circle.setRadius(radius);
	circle.setFillColor(color);
	circle.setOrigin(radius,radius);
	return circle;
}

void Prac1() {
	
	sf::RenderWindow w(sf::VideoMode(width,height),"Practice about collsion and text");
	sf::Event e;
	w.setVerticalSyncEnabled(true);


	sf::Font font;
	font.loadFromFile("Assets/animationLearning/arial.ttf"); 


	//create
	sf::RectangleShape rectangle1 = createRect(150, 100, sf::Color::Red);
	sf::Text rectangle1Text = setText(rectangle1,font,"rectangle1");
	sf::RectangleShape rectangle2 = createRect(130, 120, sf::Color::Cyan);
	sf::Text rectangle2Text = setText(rectangle2,font,"rectangle2");
	sf::RectangleShape rectangle3 = createRect(120,60,sf::Color::Green);
	sf::Text rectangle3Text = setText(rectangle3,font,"rectangle3");

	sf::CircleShape circle1 = createCircle(50.0,sf::Color::Magenta);
	sf::Text circle1Text = setText(circle1,font, "circle1");
	sf::CircleShape circle2 = createCircle(30.0, sf::Color::Blue);
	sf::Text circle2Text = setText(circle2,font, "circle2");
	sf::CircleShape circle3 = createCircle(70.0, sf::Color::Yellow);
	sf::Text circle3Text = setText(circle3,font, "circle3");

	sf::RectangleShape rectShape[3] = {rectangle1,rectangle2,rectangle3};
	sf::CircleShape circleShape[3] = {circle1,circle2,circle3};
	sf::Text rectText[3] = { rectangle1Text,rectangle2Text,rectangle3Text };
	sf::Text circleText[3] = { circle1Text,circle2Text,circle3Text };

	while (w.isOpen()) {
		while (w.pollEvent(e)) {
			if (e.type == sf::Event::Closed) {
				w.close();
			}
		}

		//code
		for (int i = 0; i < 3; ++i) {
			update(rectShape[i],rectText[i],i);
			update(circleShape[i], circleText[i], i);
		}


		w.clear();

		for (int i = 0; i < 3; ++i) {
			w.draw(circleShape[i]);
			w.draw(circleText[i]);
			w.draw(rectShape[i]);
			w.draw(rectText[i]);
		}

		w.display();

	}


}