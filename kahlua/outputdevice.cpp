#include "outputdevice.h"
#include "ui_outputdevice.h"

OutputDevice::OutputDevice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OutputDevice)
{
    ui->setupUi(this);
}

OutputDevice::~OutputDevice()
{
    delete ui;
}
