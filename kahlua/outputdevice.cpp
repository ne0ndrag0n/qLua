#include "outputdevice.h"
#include "ui_outputdevice.h"
#include <QImage>
#include <QPixmap>

OutputDevice::OutputDevice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OutputDevice)
{
    ui->setupUi(this);
    setFixedSize( size() );

    setDimensions( 640, 480 ); // DEBUG !!
    createImage();
    blit();
}

OutputDevice::~OutputDevice() {
    delete ui;

    if( buffer != NULL ) {
        delete buffer;
    }
}

void OutputDevice::setDimensions( int width, int height ) {
    this->width = width;
    this->height = height;
}

void OutputDevice::createImage() {
    buffer = new QImage( width, height, QImage::Format_RGB32 );
    buffer->fill( 0xFF000000 );
}

/**
 * @brief OutputDevice::blit
 * Copy the buffer QImage to the QLabel
 */
void OutputDevice::blit() {
    ui->display->setPixmap( QPixmap::fromImage( *buffer ) );
}
