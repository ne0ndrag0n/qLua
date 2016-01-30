#ifndef KAHLUAIDE_H
#define KAHLUAIDE_H

#include <QMainWindow>
#include "luaengine.h"

namespace Ui {
class KahluaIDE;
}

class KahluaIDE : public QMainWindow
{
    Q_OBJECT

public:
    explicit KahluaIDE(QWidget *parent = 0);
    ~KahluaIDE();

private slots:
    void on_actionE_xit_triggered();

    void on_action_Output_Device_triggered();

private:
    Ui::KahluaIDE* ui;
    LuaEngine* engine;
};

#endif // KAHLUAIDE_H
