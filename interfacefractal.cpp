#include "interfacefractal.h"

InterfaceFractal::InterfaceFractal(int image_width, int image_height)
{
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    window = new sf::RenderWindow(sf::VideoMode(static_cast<unsigned int>(image_width), static_cast<unsigned int>(image_height), desktop.bitsPerPixel), "SFML window");

    font_bebas = new sf::Font;
    if(!font_bebas->loadFromFile("Bebas.otf")){
        qDebug() << "Erreur lors du chargement de la font bebas";
    }
}

void InterfaceFractal::Clear()
{
    window->clear();
}

void InterfaceFractal::DrawPoint(int x, int y, sf::Color color)
{
    sf::RectangleShape point(sf::Vector2f(1, 1));
    point.setPosition(x, y);
    point.setFillColor(color);

    window->draw(point);
}

void InterfaceFractal::DrawDisplayTime(float time)
{
    sf::Text txt_time;
    txt_time.setFont(*font_bebas);
    txt_time.setString(sf::String(std::to_string(time)));
    txt_time.setPosition(10, 10);
    txt_time.setCharacterSize(15);

    window->draw(txt_time);

}

void InterfaceFractal::Display()
{
    window->display();
}
