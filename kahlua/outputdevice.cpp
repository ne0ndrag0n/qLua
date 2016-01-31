#include "outputdevice.h"
#include "ui_outputdevice.h"
#include <QImage>
#include <QPixmap>
#include <QLabel>
#include <QTextBrowser>
#include <QColor>
#include <QPainter>

OutputDevice::OutputDevice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OutputDevice)
{
    buffer = NULL;

    ui->setupUi(this);
    setFixedSize( size() );

    painter = new QPainter();

    setGraphicsMode( GRAPHICAL );
    setDimensions( 640, 480 ); // DEBUG !!
    createImage();
    blit();
}

OutputDevice::~OutputDevice() {
    delete ui;

    if( buffer ) {
        delete buffer;
    }
}

void OutputDevice::setGraphicsMode( ScreenType type ) {
    switch( type ) {
        case GRAPHICAL:
            ui->stackedWidget->setCurrentIndex( 0 );
            break;
        case TEXTUAL:
        default:
            ui->stackedWidget->setCurrentIndex( 1 );
    }

    currentType = type;
}

void OutputDevice::setDimensions( int width, int height ) {
    this->width = width;
    this->height = height;
}

void OutputDevice::drawLine( int x, int y, int x2, int y2, QColor color ) {
    painter->begin( buffer );
    painter->setPen( color );
    painter->drawLine( x, y, x2, y2 );
    painter->end();
    blit();
}

/**
 * @brief OutputDevice::createImage
 * @private
 */
void OutputDevice::createImage() {
    if( buffer ) {
        delete buffer;
    }

    buffer = new QImage( width, height, QImage::Format_RGB32 );
    buffer->fill( 0xFF000000 );
}

/**
 * @brief OutputDevice::blit
 * @private
 * Copy the buffer QImage to the QLabel
 */
void OutputDevice::blit() {
    ui->display->setPixmap( QPixmap::fromImage( *buffer ) );
}
