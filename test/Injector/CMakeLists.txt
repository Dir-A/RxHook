# Value Define
set(CMAKE_WIN32_EXECUTABLE ON)

# Project Name
project(Injector)

# Cpp Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Current Project
add_executable("${PROJECT_NAME}" "main.cpp")

# Add Library
target_link_libraries("${PROJECT_NAME}" PRIVATE RxHook)