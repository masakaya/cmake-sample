include_directories( ../SayClass/)
link_directories( ../SayClass/)
add_library(demo DemoClass.cpp DemoClass.h)
target_link_libraries( demo say )
