cmake_minimum_required(VERSION 3.15)
project(fakercpp CXX)




add_library(fakercpp src/fakercpp.cpp src/util.cpp src/location.cpp)
target_include_directories(fakercpp PUBLIC include)


set_target_properties(fakercpp PROPERTIES PUBLIC_HEADER "include/fakercpp.h")
install(TARGETS fakercpp)
