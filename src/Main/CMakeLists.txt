SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
#Puts here Include Directorys
INCLUDE_DIRECTORIES (
    .
    ${PROJECT_SOURCE_DIR}/src/DemoClass
)                                                                                                     

LINK_DIRECTORIES(
    ${CMAKE_BINARY_DIR}/src/lib
) 

add_executable(main.x main.cpp)
target_link_libraries( main.x demo )
