cmake_minimum_required(VERSION 3.1)
project(test)
find_package(Qt5 COMPONENTS Core REQUIRED)

add_executable(test-std)
target_sources(test-std PRIVATE test.cpp)
target_compile_options(test-std PRIVATE "-DDEC=std::prev")
target_link_libraries(test-std Qt5::Core)

add_executable(test-dec)
target_sources(test-dec PRIVATE test.cpp)
target_compile_options(test-dec PRIVATE "-DDEC=--")
target_link_libraries(test-dec Qt5::Core)
