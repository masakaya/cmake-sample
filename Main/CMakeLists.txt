include_directories( ../DemoClass/)
link_directories( ../DemoClass/)
add_executable(main.x main.cpp)
target_link_libraries( main.x demo )
