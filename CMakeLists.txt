
SET(EXECUTABLE_OUTPUT_PATH ../)

cmake_minimum_required(VERSION 3.13)

project(test)

set(SOURCE_EXE src/main.cpp)

set(SOURCE_LIB src/ui.cpp)

set( CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(ui STATIC ${SOURCE_LIB})

add_executable(app ${SOURCE_EXE})

find_package(wxWidgets REQUIRED)
include(${wxWidgets_USE_FILE})

target_link_libraries(app ui ${wxWidgets_LIBRARIES})

