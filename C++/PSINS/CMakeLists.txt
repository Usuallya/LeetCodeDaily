cmake_minimum_required(VERSION 3.12)
project(PSINS)

set(CMAKE_CXX_STANDARD 17)

add_executable(PSINS Main_SINSGPS.cpp KFApp.cpp PSINS.cpp)