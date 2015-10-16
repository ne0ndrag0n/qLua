#include "kahluaide.h"
#include "ui_kahluaide.h"

KahluaIDE::KahluaIDE(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KahluaIDE)
{
    ui->setupUi(this);
}

KahluaIDE::~KahluaIDE()
{
    delete ui;
}
