# CMake generated Testfile for 
# Source directory: C:/new-generator
# Build directory: C:/new-generator/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(unit_tests "C:/new-generator/build/unit_tests.exe")
set_tests_properties(unit_tests PROPERTIES  _BACKTRACE_TRIPLES "C:/new-generator/CMakeLists.txt;19;add_test;C:/new-generator/CMakeLists.txt;0;")
subdirs("third_party/googletest")
