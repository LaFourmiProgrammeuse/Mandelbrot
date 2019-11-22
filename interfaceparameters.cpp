#include "interfaceparameters.h"
#include "ui_interfaceparameters.h"

InterfaceParameters::InterfaceParameters(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfaceParameters)
{
    ui->setupUi(this);
}

InterfaceParameters::~InterfaceParameters()
{
    delete ui;
}

double InterfaceParameters::getPixelPerPoint()
{
    return ui->le_pixel_per_point->text().toDouble();
}

int InterfaceParameters::getIterationMax()
{
    return ui->le_iteration_max->text().toInt();
}

Window<double> InterfaceParameters::getDomainFractal()
{
    double x_min = ui->le_domain_fract_x1->text().toDouble();
    double x_max = ui->le_domain_fract_x2->text().toDouble();
    double y_min = ui->le_domain_fract_y1->text().toDouble();
    double y_max = ui->le_domain_fract_y2->text().toDouble();

    Window<double> domain_fractal(x_min, x_max, y_min, y_max);

    return domain_fractal;
}

void InterfaceParameters::setDefaultParameters(double pixel_per_point, int iteration_max, Window<double> domain_fractal, bool zoom)
{
    ui->le_pixel_per_point->setText(QString::number(pixel_per_point));
    ui->le_iteration_max->setText(QString::number(iteration_max));

    ui->le_domain_fract_x1->setText(QString::number(domain_fractal.getXMin()));
    ui->le_domain_fract_x2->setText(QString::number(domain_fractal.getXMax()));
    ui->le_domain_fract_y1->setText(QString::number(domain_fractal.getYMin()));
    ui->le_domain_fract_y2->setText(QString::number(domain_fractal.getYMax()));

    ui->le_zoom_increment->setEnabled(zoom);
}

void InterfaceParameters::saveReset()
{

}

void InterfaceParameters::close()
{

}

void InterfaceParameters::on_cb_zoom_stateChanged(int state)
{
    ui->le_zoom_increment->setEnabled(state);
}
