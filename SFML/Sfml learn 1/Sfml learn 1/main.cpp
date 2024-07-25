#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

int main() {

	sf::RenderWindow window(sf::VideoMode(800,600),"My window", sf::Style::Default);
//	window.setFramerateLimit(60);
	window.setVerticalSyncEnabled(true);
	std::cout << "Window opened" << std::endl;
	sf::RectangleShape rectangle(sf::Vector2f(100,100));
	rectangle.setOrigin(50, 50);
	rectangle.setPosition(400, 300);
	rectangle.setFillColor(sf::Color(100,220,149));

	//can put second parameter in circle to change its shape into triangle or other
	sf::CircleShape circle(50);
	circle.setRadius(60);
	circle.setPosition(sf::Vector2f(300,200));
	circle.setFillColor(sf::Color(150,100,100));
	circle.setOutlineColor(sf::Color(180,211,150));
	circle.setOutlineThickness(5);

	// second parameter is how many points will circle consist of, so i can put 3 to make it triangle or more to change it to octa or other
	sf::CircleShape triangle(50,3);

	// this is how to set texture to sprite
	sf::Texture box_texture;
	if (box_texture.loadFromFile("Assets/tex_box.png") == false) {
		std::cout << "Texture was not loaded" << std::endl;
	}
	rectangle.setTexture(&box_texture);

	triangle.setTexture(&box_texture);

	//sprite and texture
	sf::Texture ghost;
	ghost.setSmooth(true);
	if (ghost.loadFromFile("Assets/ghost.png") == false) std::cout << "Failed loading ghost.png" << std::endl;
	sf::Sprite custom_texture;
	custom_texture.setTexture(ghost);
	custom_texture.setPosition(600,50);

	// font and text
	sf::Font font;
	if(font.loadFromFile("Assets/Tell Me A Joke.ttf") == false) std::cout << "Failed to load Font" << std::endl;

	sf::Text text;
	text.setFont(font);
	text.setString("Using text and font !");
	text.setPosition(100, 0);
	text.setCharacterSize(50);
	text.setFillColor(sf::Color(100,100,100));

	// Music
	sf::Music music;
	if (!music.openFromFile("Assets/ow.flac")) std::cout << "Music didn't load" << std::endl;
	music.play();
	music.setVolume(10);

	// Sound
	sf::SoundBuffer buffersound;
	if (!buffersound.loadFromFile("Assets/sweep.wav")) std::cout << "Unable to load sound" << std::endl;
	sf::Sound sound;
	sound.setBuffer(buffersound);
	sound.play();


	while (window.isOpen()) {
		//Event Part on the main game loop
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::KeyPressed) {
				if (event.key.code == sf::Keyboard::W) {
					std::cout << "W pressed" << std::endl;
					std::cout << event.key.control << std::endl;
				}
			}
			if (event.type == sf::Event::KeyReleased) {
				if (event.key.code == sf::Keyboard::W) {
					std::cout << "W released" << std::endl;
					std::cout << event.key.control << std::endl;
				}
			}

			if (event.type == sf::Event::MouseButtonPressed) {
				if (event.mouseButton.button == sf::Mouse::Left) {
					std::cout << "Left Mouse Button Pressed" << std::endl;
					std::cout << event.mouseButton.x << " " << event.mouseButton.y << std::endl;
				}
				if (event.mouseButton.button == sf::Mouse::Right) {
					std::cout << "Right Mouse Button Pressed" << std::endl;
				}
			}

			if (event.type == sf::Event::Closed) {
				window.close();
				std::cout << "Window closed" << std::endl;
			}
		}

		//logic handling
		rectangle.move(0.2f,0.2);
		rectangle.rotate(0.1f);

		circle.rotate(6.0f);

		custom_texture.move(-0.5f,1);

		text.move(0.2f,0);

		//Rendering Part
		window.clear(sf::Color::Black);

		//Draw things
		window.draw(rectangle);
		window.draw(circle);
		window.draw(triangle);
		window.draw(custom_texture);
		window.draw(text);


		window.display();

	}

	return 0;
}