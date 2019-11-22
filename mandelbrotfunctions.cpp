#include "mandelbrotfunctions.h"

MandelbrotFunctions::MandelbrotFunctions()
{

}

void MandelbrotFunctions::mandelbrot(){

    //We define the size of render image
    image_width = int((domain_fract.getXMax()-domain_fract.getXMin())*pixel_per_point);
    image_height = int((domain_fract.getYMax()-domain_fract.getYMin())*pixel_per_point);

    //We create the window to write the fractal
    interface_fractal = new InterfaceFractal(image_width, image_height);

    //Loop over all pixels from img and check if every pixel are in the Mandelbrot set
    fractal();
}

void MandelbrotFunctions::getParameters()
{
    InterfaceParameters i_parameters;
    i_parameters.setModal(true);
    i_parameters.setWindowTitle("Paramètres");
    i_parameters.setDefaultParameters(pixel_per_point, iteration_max, domain_fract, zoom);
    i_parameters.exec();

    pixel_per_point = i_parameters.getPixelPerPoint();
    iteration_max = i_parameters.getIterationMax();
    domain_fract = i_parameters.getDomainFractal();

}

void MandelbrotFunctions::fractal(){

    sf::Clock clock;

    for(int x = 0; x < image_width; x++){

        for(int y = 0; y < image_height; y++){
            std::complex<double> c(x/pixel_per_point+domain_fract.getXMin(), y/pixel_per_point+domain_fract.getYMin());
            std::complex<double> z = 0;
            double z_module = 0;

            //qDebug() << x << y << c.real() << c.imag() << image_width;

            int i = 0;
            do{
                z = z*z + c;
                z_module = sqrt(pow(z.real(), 2) + pow(z.imag(), 2));

                i++;
                //qDebug() << z_module << i;
            }while(z_module < 2 && i < iteration_max);

            if(i == iteration_max){
                //Draw point
                interface_fractal->DrawPoint(x, y, sf::Color::Black);
                //qDebug() << x << y;
            }
            else{
                interface_fractal->DrawPoint(x, y, sf::Color(55, static_cast<sf::Uint8>(i)*155/static_cast<sf::Uint8>(iteration_max), 20));
            }

        }
    }
    interface_fractal->DrawDisplayTime(clock.getElapsedTime().asSeconds());
    interface_fractal->Display();
}

sf::Color MandelbrotFunctions::getPointColor(int i){

    /*sf::Color mapping(sf::Color::White);
    double quotient = static_cast<double>(i)/static_cast<double>(iteration_max);*/

}
