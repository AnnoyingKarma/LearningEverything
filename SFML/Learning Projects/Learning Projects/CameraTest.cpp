#include "CameraTest.h"
#include <SFML/Graphics.hpp>
#include <iostream>


void CameraTest() {
	int width = 800, height = 600;
	sf::RenderWindow w(sf::VideoMode(width,height),"Learning Camera");
	w.setVerticalSyncEnabled(true);

	//object
	sf::CircleShape obj1;
	obj1.setRadius(5.0);
	obj1.setFillColor(sf::Color::Cyan);

	// player
	sf::RectangleShape player;
	player.setFillColor(sf::Color::Magenta);
	player.setSize(sf::Vector2f(50,50));
	player.setPosition(width/2,height/2);

	//cords
	int x, y;
	int prevX=0, prevY=0;

	//camera
	sf::View camera;

	//movement
	bool forward = false,backward=false,left=false,right=false;
	float speed = 7.0f;

	//background texture
	sf::Texture bgTexture;
	bgTexture.loadFromFile("Assets/cameraTest/background/starfield.png");
	//background sprite
	sf::Sprite bg(bgTexture);
	bg.scale(10,10);

	while (w.isOpen()) {
		sf::Event e;
		while(w.pollEvent(e)) {
			if (e.type == sf::Event::Closed) {
				w.close();
			}
			if (e.type == sf::Event::KeyPressed) {
				if (e.key.code == sf::Keyboard::W) {
					forward = true;
				}
				if (e.key.code == sf::Keyboard::S) {
					backward = true;
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
					forward = false;
				}
				if (e.key.code == sf::Keyboard::S) {
					backward = false;
				}
				if (e.key.code == sf::Keyboard::A) {
					left = false;
				}
				if (e.key.code == sf::Keyboard::D) {
					right = false;
				}
			}
		}

		//gameloop
		if (forward == true) {
			player.move(0, -speed);
		}
		if (backward == true) {
			player.move(0, speed);
		}
		if (right == true) {
			player.move(speed, 0);
		}
		if (left == true) {
			player.move(-speed, 0);
		}


		if (forward == true || backward == true || left == true || right == true) {
			x = player.getPosition().x;
			y = player.getPosition().y;
			if (x != prevX || y != prevY) {
				std::cout << x/7 << "  " << y/7 << "\n";
				prevX = x;
				prevY = y;
			}
		}


		w.clear();

		camera.setCenter(player.getPosition());
		w.setView(camera);

		w.draw(bg);
		w.draw(obj1);
		w.draw(player);

		w.display();
	}
}