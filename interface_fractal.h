#ifndef INTERFACE_FRACTAL_H
#define INTERFACE_FRACTAL_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class Interface_Fractal
{
public:
    Interface_Fractal(sf::VideoMode window_size);

    void DrawPoint(int x, int y, sf::Color);
    void Draw();

private:
    sf::Window *window;

};

#endif // INTERFACE_FRACTAL_H
