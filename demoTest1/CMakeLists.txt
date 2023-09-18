cmake_minimum_required(VERSION 3.13)  # Specify the minimum required CMake version

project(demoTest1)  # Replace with your project's name



# Set C++ standard as C++ 17
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.14.0  # Adjust the version as needed
)

# Enable building Google Test as part of your project
FetchContent_MakeAvailable(googletest)

# Add your source files here
add_executable(demoTest1
    pch.cpp
    test.cpp
    # Add more source files as needed
)


# Specify any additional libraries or dependencies here
# For example, if you're using Google Test, you might include:
target_link_libraries(demoTest1 gtest gtest_main Demo)

# Link Google Test and your main project to the test executable
#target_link_libraries(demoTest 
#    App  # Link to the main project executable
#
#)
# Set compiler flags if needed
# For example, to enable C++17:
# target_compile_features(YourExecutableName PRIVATE cxx_std_17)
