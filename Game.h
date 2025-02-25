//
// Created by ADMIN on 2/25/2025.
//

#ifndef GAME_H
#define GAME_H
#include "World.h"
#include "Window.h"
#include "Textbox.h"
class Game {
public:
    Game();
    ~Game();

    void HandleInput();
    void Update();
    void Render();

    sf::Time GetElapsed();
    void RestartClock();

    Window* GetWindow();
private:
    Window m_window;
    sf::Clock m_clock;
    float m_elapsed;

    World m_world;
    Snake m_snake;
    Textbox m_textbox;
};
#endif //GAME_H
