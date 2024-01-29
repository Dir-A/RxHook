# Project Name
project(SampleDLL)

# Cpp Standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Current Project
add_library("${PROJECT_NAME}" MODULE "dllmain.cpp")

# Add Library
target_link_libraries("${PROJECT_NAME}" PRIVATE RxHook)