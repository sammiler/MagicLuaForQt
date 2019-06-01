cmake_minimum_required(VERSION 3.13)
project(MagicLuaForQt)

set(CMAKE_CXX_STANDARD 11)

include_directories(LuaEnv/include/lua5.1)
include_directories(LuaEnv/include/)
include_directories(ToolsEnv/include)
include_directories(CommonUtil)

link_directories(LuaEnv/lib)
link_directories(ToolsEnv/lib)

link_libraries(liblua5.1.dylib)
link_libraries(libluabind.dylib)
link_libraries(librttr_core_d.0.9.7.dylib)
#set(SRC  luatest.cpp luatest.h)
#add_library(luabind_test SHARED ${SRC})
set(CMAKE_CXX_FLAGS "-fpic")
add_executable(MagicLuaForQt main.cpp CommonUtil/param_template.h CommonUtil/FuncParam.h CommonUtil/Util.h)