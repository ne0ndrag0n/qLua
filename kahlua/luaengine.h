#ifndef LUAENGINE_H
#define LUAENGINE_H

#include "lua.hpp"
#include "outputdevice.h"
#include <QMainWindow>

class LuaEngine {
    public:
        LuaEngine( QMainWindow* parent );
        ~LuaEngine();
    private:
        lua_State* L;
        OutputDevice* screen;
        QMainWindow* parent;
};

#endif // LUAENGINE_H
