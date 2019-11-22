#include <QApplication>
#include <QDebug>
#include <iostream>

#include "mandelbrotfunctions.h"
#include "interfaceparameters.h"

int main(int argc, char **argv){

    QApplication app(argc, argv);

    qDebug() << "Application started";

    MandelbrotFunctions *mb = new MandelbrotFunctions;
    mb->getParameters();
    mb->mandelbrot();

    return app.exec();
}
