#ifndef INTERFACEPARAMETERS_H
#define INTERFACEPARAMETERS_H

#include <QDialog>

#include "window.h"

namespace Ui {
class InterfaceParameters;
}

class InterfaceParameters : public QDialog
{
    Q_OBJECT

public:
    explicit InterfaceParameters(QWidget *parent = nullptr);
    ~InterfaceParameters();

    double getPixelPerPoint();
    int getIterationMax();
    Window<double> getDomainFractal();

    void setDefaultParameters(double pixel_per_point, int iteration_max, Window<double> domain_fractal, bool zoom);

private:
    Ui::InterfaceParameters *ui;


public slots:
    void saveReset();
    void close();

private slots:
    void on_cb_zoom_stateChanged(int state);
};

#endif // INTERFACEPARAMETERS_H
