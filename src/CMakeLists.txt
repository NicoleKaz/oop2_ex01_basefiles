file (GLOB_RECURSE MY_SOURCE_FILES CONFIGURE_DEPENDS LIST_DIRECTORIES false RELATIVE ${CMAKE_CURRENT_LIST_DIR} *.cpp)
target_sources (${CMAKE_PROJECT_NAME} PRIVATE ${MY_SOURCE_FILES} "Calculator.cpp" "../include/Triangle.h"  "Triangle.cpp" "../include/Square.h" "Square.cpp" "../include/Shape.h" "Shape.cpp")
