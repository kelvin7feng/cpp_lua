//
//  main.cpp
//  lua_five_one
//
//  Created by 冯文斌 on 16/11/28.
//  Copyright © 2016年 kelvin. All rights reserved.
//
#include <iostream>
#include <string>
#include "lua_engine.hpp"
using namespace std;

int main()
{
    LuaEngine lua_engine;
    lua_engine.InitState(LuaEngine::SERVER_TYPE::LOGIC);
    return 0;  
}