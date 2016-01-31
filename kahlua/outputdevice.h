#ifndef OUTPUTDEVICE_H
#define OUTPUTDEVICE_H

#include <QDialog>
#include <QLabel>
#include <QImage>
#include <QPainter>
#include <QTextBrowser>
#include <QColor>
#include <QPixmap>

namespace Ui {
    class OutputDevice;
}

class OutputDevice : public QDialog {
    Q_OBJECT

    enum ScreenType {
        GRAPHICAL,
        TEXTUAL
    };

public:
    explicit OutputDevice(QWidget *parent = 0);
    ~OutputDevice();

    void setDimensions( int width, int height );
    void setGraphicsMode( ScreenType type );
    void drawLine( int x, int y, int x2, int y2, QColor color );

private:
    Ui::OutputDevice* ui;

    QImage* buffer;
    QPainter* painter;

    int width;
    int height;

    ScreenType currentType;

    void createImage();
    void blit();
};

#endif // OUTPUTDEVICE_H
