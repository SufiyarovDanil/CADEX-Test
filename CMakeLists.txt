cmake_minimum_required (VERSION 3.8)

project("CADEX-Test")

add_subdirectory(src)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 11)
