//
// Created by ADMIN on 2/25/2025.
//

#ifndef WINDOW_H
#define WINDOW_H
#include <SFML/Graphics.hpp>
#include<string>

class Window {
public:
    Window();
    Window(const std::string& l_title, const sf::Vector2u& l_size);
    ~Window();

    void BeginDraw(); // Clear the window
    void EndDraw(); // Display the changes

    void Update();

    bool IsDone();
    bool IsFullScreen();
    sf::Vector2u GetWindowSize();

    void ToggleFullscreen();

    void Draw(sf::Drawable& l_drawable);

    sf::RenderWindow* GetRenderWindow();
private:
    void Setup(const std::string& l_title,
        const sf::Vector2u& l_size);
    void Destroy();
    void Create();
    sf::RenderWindow m_window;
    sf::Vector2u m_windowSize;
    std::string m_windowTitle;
    bool m_isDone;
    bool m_isFullscreen;
};


#endif //WINDOW_H
