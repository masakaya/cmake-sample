include_directories( ${PROJECT_SOURCE_DIR}/SayClass/)
link_directories( ${PROJECT_SOURCE_DIR}/SayClass/)
add_library(demo DemoClass.cpp DemoClass.h)
target_link_libraries( demo say )
