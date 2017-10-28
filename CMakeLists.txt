cmake_minimum_required(VERSION 3.8)
project(ProjectQM_ND)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Chain.cpp Chain.h Bead.cpp Bead.h Particle.cpp Particle.h Constants.h)
add_executable(ProjectQM_ND ${SOURCE_FILES})