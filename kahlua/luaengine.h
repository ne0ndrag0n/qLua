#ifndef LUAENGINE_H
#define LUAENGINE_H

#include "lua.hpp"

class LuaEngine {
    public:
        LuaEngine();
        ~LuaEngine();
    private:
        lua_State* L;
};

#endif // LUAENGINE_H
