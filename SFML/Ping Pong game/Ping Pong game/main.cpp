#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main() {
	

	int width = 1200, height = 700;
	bool play = true;
	
	bool up = false, down = false;

	std::string strHighScore="0";
	std::string strCurrentScore="0";


	// Velocities
	int yVelPad1 = 0;
	int xVelBall = -10;
	int yVelBall = -10;
	int yVelPad2 = 0;

	//Score
	int currentScore = 0;
	int highScore = 0;
	

	sf::RenderWindow w(sf::VideoMode(width,height),"Ping Pong");
	w.setVerticalSyncEnabled(true);

	//Loaded textures
	sf::Texture background;
	sf::Texture ball;
	sf::Texture pad;
	if (!background.loadFromFile("Assets/background.png") || !ball.loadFromFile("Assets/ball.png") || !pad.loadFromFile("Assets/pad.png")) {
		std::cout << "File unable to load" << std::endl;
		return -1;
	}
	
	//Loading sound
	sf::SoundBuffer sb;
	if (!sb.loadFromFile("Assets/hit.wav")) {
		std::cout << "Unable to load sound" << std::endl;
		return -1;
	}
	
	//Loading Font
	sf::Font font;
	if (!font.loadFromFile("Assets/arial.ttf")) {
		std::cout << "Font unable to load" << std::endl;
		return -1;
	}

	//Text
	sf::Text score;
	score.setString("0 : 0");
	score.setFont(font);
	score.setPosition(sf::Vector2f(width/2,20));

	sf::RectangleShape backgroundImage;
	backgroundImage.setTexture(&background);
	backgroundImage.setSize(sf::Vector2f(width,height));
	
	sf::RectangleShape pad1;
	pad1.setTexture(&pad);
	pad1.setSize(sf::Vector2f(40,150));
	pad1.setPosition(50,height/2);

	sf::RectangleShape pad2;
	pad2.setTexture(&pad);
	pad2.setSize(sf::Vector2f(40, 150));
	pad2.setPosition(1100, height/2);

	sf::RectangleShape pongBall;
	pongBall.setTexture(&ball);
	pongBall.setSize(sf::Vector2f(30,30));
	pongBall.setPosition(width/2,height/2);

	while (play==true) {

		sf::Event e;

		while (w.pollEvent(e)) {

			if (e.type == sf::Event::Closed) {
				play = false;
			}

			//Movement
			
			// Up movement
			if (e.type == sf::Event::KeyPressed && e.key.code == sf::Keyboard::W) {
				up = true;
			}		
			if (e.type == sf::Event::KeyReleased && e.key.code == sf::Keyboard::W) {
				up = false;
			}
			//Down movement
			if (e.type == sf::Event::KeyPressed && e.key.code == sf::Keyboard::S) {
				down = true;
			}
			if (e.type == sf::Event::KeyReleased && e.key.code == sf::Keyboard::S) {
				down = false;
			}

		}

		//Collisions
		if (pongBall.getGlobalBounds().intersects(pad1.getGlobalBounds())) {
			xVelBall = -xVelBall;
			currentScore += 1;
			strCurrentScore = std::to_string(currentScore);
			score.setString(strHighScore + " : " + strCurrentScore);
		}
		if (pongBall.getGlobalBounds().intersects(pad2.getGlobalBounds())) {
			xVelBall = -xVelBall;
		}


		// Out of bounds check
		//pad1
		if (pad1.getPosition().y < 0) {
			pad1.setPosition(50,0);
		}
		if (pad1.getPosition().y > 550) {
			pad1.setPosition(50, 550);
		}

		//Pad2
		if (pad2.getPosition().y < 0) {
			pad2.setPosition(1100, 0);
		}
		if (pad2.getPosition().y > 550) {
			pad2.setPosition(1100, 550);
		}

		//Ball
		if (pongBall.getPosition().y < 0) {
			yVelBall = -yVelBall;
		}
		if (pongBall.getPosition().y > 670) {
			yVelBall = -yVelBall;
		}
		if (pongBall.getPosition().x > width + 50) {
			if (currentScore > highScore) {
				highScore = currentScore;
			}
			strHighScore = std::to_string(highScore);
			currentScore = 0;
			pongBall.setPosition(width/2,height/2);
		}
		if (pongBall.getPosition().x < -50) {
			if (currentScore > highScore) {
				highScore = currentScore;
			}
			strHighScore = std::to_string(highScore);
			currentScore = 0;
			pongBall.setPosition(width / 2, height / 2);
		}

		pongBall.move(xVelBall,yVelBall);

		// up and down movement
		if (up == true) {
			yVelPad1 = -10;
		}
		if (down == true) {
			yVelPad1 = 10;
		}
		if (up == true && down == true) {
			yVelPad1 = 0;
		}
		if (up == false && down == false) {
			yVelPad1 = 0;
		}

		pad1.move(0,yVelPad1);

		//Pad2 simple ai
		if (pongBall.getPosition().y > pad2.getPosition().y) {
			yVelPad2 = 10;
		}
		if (pongBall.getPosition().y < pad2.getPosition().y) {
			yVelPad2 = -10;
		}

		pad2.move(0, yVelPad2);
		


		w.clear();

		w.draw(backgroundImage);
		w.draw(pad1);
		w.draw(pad2);
		w.draw(pongBall);
		w.draw(score);
		w.display();

	}
	
}