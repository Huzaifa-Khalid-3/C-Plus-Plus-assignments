cmake_minimum_required(VERSION 3.13)  # CMake version check
project(simple_example)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 11)            # Enable c++11 standard
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Add executable target with source files listed in SOURCE_FILES variable
#SHARED means make .dll instead of .lib
add_library(MyCPPLibrary SHARED "Lab8.java" "Lab8.h" "Lab8.cpp") 
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /openmp")

target_include_directories(MyCPPLibrary PRIVATE 
	"C:\\Program Files\\Amazon Corretto\\jdk17.0.8_8\\include"
	"C:\\Program Files\\Amazon Corretto\\jdk17.0.8_8\\include\\win32")



# TODO: Add tests and install targets if needed.