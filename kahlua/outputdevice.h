#ifndef OUTPUTDEVICE_H
#define OUTPUTDEVICE_H

#include <QDialog>

namespace Ui {
class OutputDevice;
}

class OutputDevice : public QDialog
{
    Q_OBJECT

public:
    explicit OutputDevice(QWidget *parent = 0);
    ~OutputDevice();

private:
    Ui::OutputDevice *ui;
};

#endif // OUTPUTDEVICE_H
