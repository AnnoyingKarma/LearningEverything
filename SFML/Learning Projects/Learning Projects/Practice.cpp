#include <SFML/Graphics.hpp>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const float BALL_RADIUS = 5.f;
const float BALL_SPEED = 200.f;
const float GRAVITY = 980.0f; // Gravity acceleration (pixels/second^2)
const float GROUND_LEVEL = WINDOW_HEIGHT - BALL_RADIUS; // Ground level
const float RESTITUTION = 0.8f; // Coefficient of restitution (energy loss on collision)

// Ball class
class Ball {
public:
    Ball(float x, float y) : circle(BALL_RADIUS) {
        circle.setPosition(x, y);
        circle.setFillColor(sf::Color::Blue);
        circle.setOrigin(BALL_RADIUS, BALL_RADIUS);
        // Randomize initial velocity
        velocity.x = (std::rand() % 200 - 100) / 100.f * BALL_SPEED;
        velocity.y = (std::rand() % 200 - 100) / 100.f * BALL_SPEED;
    }

    void update(float dt) {
        // Apply gravity
        velocity.y += GRAVITY * dt;

        circle.move(velocity * dt);

        // Check for collisions with window boundaries
        if (circle.getPosition().x - BALL_RADIUS < 0) {
            velocity.x = std::abs(velocity.x);
            circle.setPosition(BALL_RADIUS, circle.getPosition().y);
        }
        if (circle.getPosition().x + BALL_RADIUS > WINDOW_WIDTH) {
            velocity.x = -std::abs(velocity.x);
            circle.setPosition(WINDOW_WIDTH - BALL_RADIUS, circle.getPosition().y);
        }
        if (circle.getPosition().y + BALL_RADIUS > GROUND_LEVEL) {
            // Ground collision
            velocity.y = -velocity.y * RESTITUTION;
            circle.setPosition(circle.getPosition().x, GROUND_LEVEL - BALL_RADIUS);
        }
    }

    void resolveCollision(Ball& other) {
        sf::Vector2f delta = circle.getPosition() - other.circle.getPosition();
        float distance = std::sqrt(delta.x * delta.x + delta.y * delta.y);
        if (distance < 2 * BALL_RADIUS) {
            // Simple elastic collision response
            sf::Vector2f normal = delta / distance;
            sf::Vector2f relativeVelocity = velocity - other.velocity;
            float dotProduct = relativeVelocity.x * normal.x + relativeVelocity.y * normal.y;
            if (dotProduct < 0) {
                sf::Vector2f impulse = normal * dotProduct;
                velocity -= impulse;
                other.velocity += impulse;

                // Separate the balls to prevent overlap
                float overlap = 2 * BALL_RADIUS - distance;
                sf::Vector2f correction = normal * (overlap / 2.0f);
                circle.move(correction);
                other.circle.move(-correction);
            }
        }
    }

    sf::CircleShape circle;
    sf::Vector2f velocity;
};

void practice() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Ball Spawner");
    window.setFramerateLimit(60);
    std::vector<Ball> balls;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Check if the left mouse button is pressed
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
            // Spawn a new ball at the mouse position
            sf::Vector2f mousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
            balls.emplace_back(mousePos.x, mousePos.y);
        }

        // Update balls
        for (auto& ball : balls) {
            ball.update(1.f / 60.f); // Assuming 60 FPS
        }

        // Check for collisions between balls
        for (size_t i = 0; i < balls.size(); ++i) {
            for (size_t j = i + 1; j < balls.size(); ++j) {
                balls[i].resolveCollision(balls[j]);
            }
        }

        window.clear();
        // Draw balls
        for (const auto& ball : balls) {
            window.draw(ball.circle);
        }
        window.display();
    }
}


