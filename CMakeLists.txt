cmake_minimum_required(VERSION 3.20)
project(snake)

set(CMAKE_CXX_STANDARD 20)

# Set SFML root directory
set(SFML_ROOT "D:/TranKhoiNguyen2023/Fintech/snake/SFML-2.6.1")

# Include SFML headers
include_directories("${SFML_ROOT}/include")

# Link SFML libraries
link_directories("${SFML_ROOT}/lib")

# Create executable
add_executable(snake main.cpp
        Snake.h
        Snake.cpp
        World.h
        World.cpp
        Game.h
        Game.cpp
        WIndow.cpp
        WIndow.h
        Window.cpp
        Window.h
        Textbox.cpp
        Textbox.h)

# Link SFML dynamically
target_link_libraries(snake sfml-graphics sfml-window sfml-system)