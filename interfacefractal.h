#ifndef INTERFACEFRACTAL_H
#define INTERFACEFRACTAL_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

#include <QDebug>

class InterfaceFractal
{
public:
    InterfaceFractal(int image_width, int image_height);

    void Clear();
    void DrawPoint(int x, int y,sf::Color color);
    void DrawDisplayTime(float time);
    void Display();


private:
    sf::RenderWindow *window = nullptr;
    sf::Font *font_bebas = nullptr;

};

#endif // INTERFACEFRACTAL_H
