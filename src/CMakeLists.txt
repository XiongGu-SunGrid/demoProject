cmake_minimum_required(VERSION 3.13)  # Specify the minimum required CMake version

set(BINARY ${CMAKE_PROJECT_NAME})  #sets the variable "BINARY" to the value of "CMAKE_PROJECT_NAME."

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp) #searches for all files with the extensions ".h" and ".cpp" recursively in the project directory and its subdirectories

set(SOURCES ${SOURCES})

add_executable(${BINARY}_run ${SOURCES})

add_library(${BINARY}_lib STATIC ${SOURCES})