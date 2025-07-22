cmake_minimum_required(VERSION 3.14)
project(TwoSumGTest)

set(CMAKE_CXX_STANDARD 14)

# Fetch Google Test from GitHub
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Force all targets to use dynamic runtime (/MD, /MDd)
if(MSVC)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreadedDLL")
endif()

# Add your solution code as a library
add_library(solution STATIC solution.cpp)

# Add test executable
add_executable(runTests test/test.cpp)

# Link Google Test and your solution
target_link_libraries(runTests gtest gtest_main solution)

# Register tests
include(GoogleTest)
gtest_discover_tests(runTests)
