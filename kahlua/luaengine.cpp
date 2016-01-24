#include "luaengine.h"
#include "lua.hpp"

LuaEngine::LuaEngine() {
    this->L = luaL_newstate();
    luaL_openlibs( this->L );
}

LuaEngine::~LuaEngine () {
    lua_close( this->L );
}
