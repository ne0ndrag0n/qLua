#include "kahluaide.h"
#include "ui_kahluaide.h"
#include "luaengine.h"
#include <cstdlib>

KahluaIDE::KahluaIDE( QWidget *parent ) :
    QMainWindow( parent ), ui( new Ui::KahluaIDE ), engine( new LuaEngine( this ) ) {
    ui->setupUi(this);
}

KahluaIDE::~KahluaIDE() {
    delete engine;

    delete ui;
}

void KahluaIDE::on_actionE_xit_triggered() {
    exit( 0 );
}

void KahluaIDE::on_action_Output_Device_triggered() {
    engine->toggleOutputDevice();
}
