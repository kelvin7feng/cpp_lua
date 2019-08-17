#项目名称，使用语言
PROJECT(LUA_TEST C CXX)
#CMake最低版本
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
#设置源文件
SET(SRC_LIST ./lua_five_one/main.cpp ./vm/lua_engine.cpp)
#设置变量
SET(PROJECT_ROOT_PATH "${CMAKE_CURRENT_SOURCE_DIR}")
#设置头文件搜索目录
INCLUDE_DIRECTORIES("${PROJECT_ROOT_PATH}/third_party/lua-5.1.5/src/")
INCLUDE_DIRECTORIES("${PROJECT_ROOT_PATH}/vm/")
#增加子目录
ADD_SUBDIRECTORY("${PROJECT_ROOT_PATH}/vm/")
#增加库文件搜索
LINK_DIRECTORIES("${PROJECT_ROOT_PATH}/vm/")
#执行编译
ADD_EXECUTABLE(main ${SRC_LIST})
#链接第三方库, 注意，这里需要链接dl的库
TARGET_LINK_LIBRARIES(main lua dl vm)
