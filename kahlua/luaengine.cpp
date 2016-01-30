#include "luaengine.h"
#include "lua.hpp"
#include "outputdevice.h"
#include <iostream>
#include <QMainWindow>

LuaEngine::LuaEngine( QMainWindow* parent )
    : parent( parent ) {

    this->screen = new OutputDevice( parent );

    this->L = luaL_newstate();
    luaL_openlibs( this->L );
}

LuaEngine::~LuaEngine () {
    lua_close( this->L );
}

void LuaEngine::toggleOutputDevice() {
    this->screen->show();
}
