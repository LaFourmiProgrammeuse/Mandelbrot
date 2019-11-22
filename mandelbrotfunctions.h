#ifndef MANDELBROTFUNCTIONS_H
#define MANDELBROTFUNCTIONS_H

#include <complex>
#include <cmath>
#include <iostream>
#include <QDebug>

#include <cstdint>
#include <algorithm>
#include <iomanip>
#include <random>

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

#include "window.h"
#include "interfacefractal.h"
#include "interfaceparameters.h"

class MandelbrotFunctions
{
public:
    MandelbrotFunctions();

    void mandelbrot();
    void getParameters();
    void fractal();

    sf::Color getPointColor(int i);

private:
    double pixel_per_point = 300; //Pixel number per point of the plan
    int iteration_max = 42; //Related to precision
    int image_width, image_height;
    bool zoom = false;

    //We define the domain in which we test for points
    Window<double> domain_fract = Window<double>(-2.1, 0.6, -1.2, 1.2);

    InterfaceFractal *interface_fractal = nullptr;

};

#endif // MANDELBROTFUNCTIONS_H
