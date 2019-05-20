cmake_minimum_required(VERSION 3.13)
project(MagicLuaForQt)

set(CMAKE_CXX_STANDARD 11)

include_directories(LuaEnv/include)


link_directories(LuaEnv/lib)

link_libraries(liblua.a)

add_executable(MagicLuaForQt main.cpp)