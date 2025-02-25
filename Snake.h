//
// Created by ADMIN on 2/17/2025.
//

#ifndef SNAKE_H
#define SNAKE_H

#include<SFML/Graphics.hpp>

struct SnakeSegment {
    sf::Vector2i position;
    SnakeSegment(int x, int y) : position(x, y) {

    }
};

using SnakeContainer = std::vector<SnakeSegment>;

enum class Direction{None, Up, Down, Left, Right};

class Snake {
public:
    Snake(int l_blocksize); // constructor
    ~Snake(); // destructor

    // helper function
    void SetDirection(Direction l_dir);
    Direction GetDirection();
    int GetSpeed();
    sf::Vector2i GetPosition();
    int GetLives();
    int GetScore();
    void IncreaseScore();
    bool HasLost();

    void Lose(); // Handle losing state
    void ToggleLost();

    void Extend(); // Grow the snake
    void Reset(); // Reset to starting position

    void Move(); // Movement method
    void Tick(); // Update method
    void Cut(int l_segments); // Method for cutting snake
    void Render(sf::RenderWindow& l_window);

private:
    void CheckCollision(); // checking for collisions

    SnakeContainer m_snakeBody; // Segment vector.
    int m_size; // Size of the graphics
    Direction m_dir; // Current direction
    int m_speed; // Speed of the snake
    int m_lives; // Lives
    int m_score; // Score
    bool m_lost; // Losing state
    sf::RectangleShape m_bodyRect; // Shape used in rendering
};





#endif //SNAKE_H
