cmake_minimum_required(VERSION 2.8)

SET( CMAKE_CXX_COMPILER "g++" )
SET( CMAKE_C_COMPILER "gcc" )

project(travis-test)

add_executable(travis-test test.cpp)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED OFF)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost 1.46.0
	REQUIRED
	COMPONENTS graph)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++11 -pipe")

