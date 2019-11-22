#include "interface_fractal.h"

Interface_Fractal::Interface_Fractal(sf::VideoMode window_size)
{
    window = new sf::Window(window_size, "Mandelbrot");
}
