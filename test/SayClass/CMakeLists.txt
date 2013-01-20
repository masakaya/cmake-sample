SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/test/bin)

#Puts here Include Directorys
INCLUDE_DIRECTORIES (
    .
    ${PROJECT_SOURCE_DIR}/src/SayClass
    ${PROJECT_SOURCE_DIR}/test/UnitTestFW/gtest/include/gtest
)             

#Puts here Link Directorys
LINK_DIRECTORIES(
    ${CMAKE_BINARY_DIR}/lib
)

add_library(demo SHARED DemoClass.cpp DemoClass.h)
target_link_libraries( demo say )
