#ifndef KAHLUAIDE_H
#define KAHLUAIDE_H

#include <QMainWindow>

namespace Ui {
class KahluaIDE;
}

class KahluaIDE : public QMainWindow
{
    Q_OBJECT

public:
    explicit KahluaIDE(QWidget *parent = 0);
    ~KahluaIDE();

private:
    Ui::KahluaIDE *ui;
};

#endif // KAHLUAIDE_H
