#include "outputdevice.h"
#include "ui_outputdevice.h"
#include <QImage>
#include <QPixmap>
#include <QLabel>
#include <QTextBrowser>
#include <QColor>
#include <QPainter>
#include <QString>

OutputDevice::OutputDevice(QWidget *parent) :
    QDialog(parent), ui(new Ui::OutputDevice) {
    buffer = NULL;
    setDimensions( 640, 480 );

    ui->setupUi(this);
    setFixedSize( size() );

    painter = new QPainter();

    setGraphicsMode( TEXTUAL );
}

OutputDevice::~OutputDevice() {
    delete ui;
    delete painter;

    if( buffer ) {
        delete buffer;
    }
}

void OutputDevice::setGraphicsMode( ScreenType type ) {
    switch( type ) {
        case GRAPHICAL:
            ui->stackedWidget->setCurrentIndex( 0 );
            createBuffer();
            break;
        case TEXTUAL:
        default:
            ui->stackedWidget->setCurrentIndex( 1 );
    }

    currentType = type;
}

void OutputDevice::print( QString str ) {
    if( currentType == GRAPHICAL ) {
        // STUB !!
    } else {
        // Output to QTextBrowser
        ui->console->append( str );
    }
}

void OutputDevice::setDimensions( int width, int height ) {
    this->width = width;
    this->height = height;
}

void OutputDevice::drawLine( int x, int y, int x2, int y2, QColor color ) {
    if( buffer ) {
        painter->begin( buffer );
        painter->setPen( color );
        painter->drawLine( x, y, x2, y2 );
        painter->end();
        blit();
    }
}

/**
 * @brief OutputDevice::createImage
 * @private
 */
void OutputDevice::createBuffer() {
    if( buffer ) {
        delete buffer;
    }

    buffer = new QImage( width, height, QImage::Format_RGB32 );
    buffer->fill( 0xFF000000 );
    blit();
}

/**
 * @brief OutputDevice::blit
 * @private
 * Copy the buffer QImage to the QLabel
 */
void OutputDevice::blit() {
    if( buffer ) {
        ui->display->setPixmap( QPixmap::fromImage( *buffer ) );
    }
}
