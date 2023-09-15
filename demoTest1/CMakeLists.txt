cmake_minimum_required(VERSION 3.13)  # Specify the minimum required CMake version

project(demoTest1)  # Replace with your project's name



# Set C++ standard as C++ 17
set(CMAKE_CXX_STANDARD 17)

# Add your source files here
add_executable(demoTest
    pch.cpp
    test.cpp
    # Add more source files as needed
)


# Specify any additional libraries or dependencies here
# For example, if you're using Google Test, you might include:
target_link_libraries(demoTest gtest gtest_main)

# Link Google Test and your main project to the test executable
target_link_libraries(demoTest PRIVATE
    App  # Link to the main project executable

)
# Set compiler flags if needed
# For example, to enable C++17:
# target_compile_features(YourExecutableName PRIVATE cxx_std_17)
