SET(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

#Puts here Include Directorys
INCLUDE_DIRECTORIES (
    .
    ${PROJECT_SOURCE_DIR}/src/SayClass
)             

#Puts here Link Directorys
LINK_DIRECTORIES(
    ${CMAKE_BINARY_DIR}/lib
)

add_library(demo SHARED DemoClass.cpp DemoClass.h)
target_link_libraries( demo say )
