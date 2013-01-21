SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/test/bin)


#Puts here Link Directorys
LINK_DIRECTORIES(
    ${CMAKE_BINARY_DIR}/lib
    ${CMAKE_BINARY_DIR}/test/UnitTestFW/gtest
)

# Puts here Target Link
SET( UNITTEST_TARGET_LINK
   gtest
)

# Source
SET( UNITTEST_SRCS 
    UnitTest_SayClass.cpp
)

#Puts here Include Directorys
INCLUDE_DIRECTORIES (
    .
    ${PROJECT_SOURCE_DIR}/src/SayClass
    ${PROJECT_SOURCE_DIR}/test/UnitTestFW/gtest/include
)

ADD_EXECUTABLE( unittest_SayClass.x ${UNITTEST_SRCS} )
#add_library(demo SHARED DemoClass.cpp DemoClass.h)
target_link_libraries( unittest_SayClass.x ${UNITTEST_TARGET_LINK} )
