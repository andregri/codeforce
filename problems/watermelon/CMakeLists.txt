cmake_minimum_required(VERSION 3.0.0)
project(watermelon VERSION 0.1.0)

include(CTest)
enable_testing()
add_executable(my_test tester.cpp)
add_test(Tester my_test)


add_executable(watermelon main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
