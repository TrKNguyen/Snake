//
// Created by ADMIN on 2/25/2025.
//

#ifndef TEXTBOX_H
#define TEXTBOX_H

#include<SFML/Graphics.hpp>

using MessageContainer = std::vector<std::string>;


class Textbox {
public:
    Textbox();
    Textbox(int l_visible, int l_charSize, int l_width, sf::Vector2f l_screenPos);
    ~Textbox();

    void Setup(int l_visible, int l_charSize, int l_width, sf::Vector2f l_screenPos);

    void Add(std::string l_message);
    void Clear();

    void Render(sf::RenderWindow& l_wind);
private:
    MessageContainer m_messages;
    int m_numVisible;

    sf::RectangleShape m_backdrop;
    sf::Font m_font;
    sf::Text m_content;
};



#endif //TEXTBOX_H
