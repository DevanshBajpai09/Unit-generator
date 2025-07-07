cmake_minimum_required(VERSION 3.10)
project(my_new_project)

set(CMAKE_CXX_STANDARD 17)

# Include src and include
include_directories(include)

# Add GoogleTest
add_subdirectory(third_party/googletest)

# Add main binary
add_executable(main_exec src/main.cpp)

# Add test binary
enable_testing()
add_executable(unit_tests tests/test_main.cpp)
target_link_libraries(unit_tests gtest gtest_main)
add_test(NAME unit_tests COMMAND unit_tests)
