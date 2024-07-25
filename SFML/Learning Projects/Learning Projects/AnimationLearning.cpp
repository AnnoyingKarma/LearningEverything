#include "AnimationLearning.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <vector>
#include <iostream>

void outOfBound(sf::RenderWindow &w,sf::Sprite &sprite,int pos) {
	if (sprite.getPosition().x >= w.getSize().x) {
		sprite.setPosition(pos, 0);
	}
}

void animationLearning() {

	//window
	int width = 224, height = 240;
	sf::RenderWindow w(sf::VideoMode(width,height),"My window");
	
	//fps cap
	w.setVerticalSyncEnabled(true);

	//car texture and loading texture
	std::vector<sf::Texture> vecTextureCar(6);
	for (int i = 0; i < 6; i++) {
		vecTextureCar[i].loadFromFile("Assets/animationLearning/runningCar/car-running"+std::to_string(i+1)+ ".png");
		vecTextureCar[i].setSmooth(true);
	}
	
	//car sprite and sprite frame
	int currentFrame = 0;
	sf::Sprite car;
	car.setOrigin(92,34);
	car.setPosition(112,200);
	car.setScale(-1.0,1.0);

	//all background textures
	//back and clouds
	sf::Texture textureBack;
	textureBack.loadFromFile("Assets/animationLearning/Layers/back.png");

	//buildings
	sf::Texture textureBuildings;
	textureBuildings.loadFromFile("Assets/animationLearning/Layers/buildings.png");

	//highway
	sf::Texture textureHighway;
	textureHighway.loadFromFile("Assets/animationLearning/Layers/highway.png");

	//palmTrees with ground
	sf::Texture texturePalms;
	texturePalms.loadFromFile("Assets/animationLearning/Layers/palms.png");

	//only palm tree
	sf::Texture texturePalmTree;
	texturePalmTree.loadFromFile("Assets/animationLearning/Layers/palm-tree.png");

	//only sun
	sf::Texture textureSun;
	textureSun.loadFromFile("Assets/animationLearning/Layers/sun.png");

	//sprites for all backgrounds
	sf::Sprite back(textureBack);
	sf::Sprite buildings(textureBuildings);
	sf::Sprite highway(textureHighway);
	sf::Sprite palms(texturePalms);
	sf::Sprite palmTree(texturePalmTree);
	sf::Sprite sun(textureSun);
	highway.setPosition(-672,0);

	// second background 
	sf::Sprite backD = back;
	sf::Sprite buildingsD = buildings;
	sf::Sprite highwayD = highway;
	sf::Sprite palmsD = palms;
	sf::Sprite palmTreeD = palmTree;
	backD.setPosition(-224, 0);
	buildingsD.setPosition(-256, 0);
	highwayD.setPosition(-1568, 0);
	palmsD.setPosition(-224, 0);
	palmTreeD.setPosition(-900, 0);

	

	// sprite parallaxspeed
	int parallaxSpeedX = 1;

	

	//font and text 
	sf::Font font;
	font.loadFromFile("Assets/animationLearning/arial.ttf");
	sf::Text fpsDisplay;
	fpsDisplay.setFont(font);
	fpsDisplay.setPosition(width - fpsDisplay.getCharacterSize(), 0);
	fpsDisplay.setCharacterSize(20);


	//fps display
	sf::Clock clock;
	int frameCount = 0;

	//audio background
	sf::Music drivingCar;
	drivingCar.openFromFile("Assets/animationLearning/audio/driving-in-a-car.mp3");
	drivingCar.play();
	drivingCar.setLoop(true);
	drivingCar.setPitch(0.5);

	while (w.isOpen()) {
		sf::Event e;
		while (w.pollEvent(e)) {
			if (e.type == sf::Event::Closed) {
				w.close();
			}
				
		}


		//background parallax effect
		back.move(parallaxSpeedX,0);
		buildings.move(parallaxSpeedX+1 , 0);
		highway.move(parallaxSpeedX+6, 0);
		palms.move(parallaxSpeedX+3 , 0);
		palmTree.move(parallaxSpeedX+4 , 0);

		//background parallax effect for second background
		backD.move(parallaxSpeedX, 0);
		buildingsD.move(parallaxSpeedX + 1, 0);
		highwayD.move(parallaxSpeedX + 6, 0);
		palmsD.move(parallaxSpeedX + 3, 0);
		palmTreeD.move(parallaxSpeedX + 4, 0);



		//reset positon of backgrounds when they get out of bound
		outOfBound(w,back,-224);
		outOfBound(w,buildings,-256);
		outOfBound(w, highway, -1568);
		outOfBound(w,palms,-224);
		outOfBound(w, palmTree, -900);

		//reset positon of second background
		outOfBound(w, backD, -224);
		outOfBound(w, buildingsD, -256);
		outOfBound(w, highwayD, -1568);
		outOfBound(w, palmsD, -224);
		outOfBound(w, palmTreeD, -900);


		//car frames set 
		if (currentFrame >= 6) {
			currentFrame = 0;
		}
		else {
			car.setTexture(vecTextureCar[currentFrame]);
			currentFrame++;
		}

		//display fps
		sf::Time elapsed = clock.restart();
		int fps = 1.f / elapsed.asSeconds();
		frameCount++;
		if (frameCount >= 60) // Log once every second
		{
			std::cout << "FPS: " << fps << std::endl;
			fpsDisplay.setString(std::to_string(fps));
			frameCount = 0;
		}



		w.clear();

		w.draw(back);
		w.draw(backD);
		w.draw(sun);
		w.draw(buildings);
		w.draw(buildingsD);
		w.draw(palms);
		w.draw(palmsD);
		w.draw(palmTree);
		w.draw(palmTreeD);
		w.draw(highway);
		w.draw(highwayD);
		w.draw(car);
		w.draw(fpsDisplay);

		w.display();

	}
}
