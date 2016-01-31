#ifndef OUTPUTDEVICE_H
#define OUTPUTDEVICE_H

#include <QDialog>
#include <QLabel>
#include <QImage>
#include <QPainter>

namespace Ui {
    class OutputDevice;
}

class OutputDevice : public QDialog {
    Q_OBJECT

public:
    explicit OutputDevice(QWidget *parent = 0);
    ~OutputDevice();

    void setDimensions( int width, int height );

private:
    Ui::OutputDevice* ui;

    QImage* buffer;
    QPainter* painter;

    int width;
    int height;

    void createImage();
    void blit();
};

#endif // OUTPUTDEVICE_H
