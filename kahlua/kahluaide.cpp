#include "kahluaide.h"
#include "ui_kahluaide.h"
#include <cstdlib>

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

void KahluaIDE::on_actionE_xit_triggered()
{
    exit( 0 );
}
