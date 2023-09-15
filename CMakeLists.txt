cmake_minimum_required(VERSION 3.13)  # Specify the minimum required CMake version

project(demoProject)  # Replace with your project's name


# Set C++ standard as C++ 17
set(CMAKE_CXX_STANDARD 17)

# Add your source files here
add_executable(myProject
    DemoApp/calculator.cpp
    DemoApp/DemoApp.cpp
    demoTest1/pch.cpp
    demoTest1/test.cpp
    # Add more source files as needed
)

target_include_directories(myProject
    PUBLIC
    ${CMAKE_SOURCE_DIR}/Header Files
)


# Specify any additional libraries or dependencies here
# For example, if you're using Google Test, you might include:
target_link_libraries(myProject gtest gtest_main)

# Set compiler flags if needed
# For example, to enable C++17:
# target_compile_features(YourExecutableName PRIVATE cxx_std_17)
