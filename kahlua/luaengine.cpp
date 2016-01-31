#include "luaengine.h"
#include "lua.hpp"
#include "outputdevice.h"
#include <iostream>
#include <QMainWindow>

LuaEngine::LuaEngine( QMainWindow* parent )
    : parent( parent ) {

    screen = new OutputDevice( /* parent */ );

    L = luaL_newstate();
    luaL_openlibs( L );
}

LuaEngine::~LuaEngine () {
    lua_close( L );

    delete screen;
}

void LuaEngine::toggleOutputDevice() {
    screen->show();
}
