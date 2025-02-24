cmake_minimum_required(VERSION 3.30)
project(snake)

set(CMAKE_CXX_STANDARD 20)

# Set SFML root directory
set(SFML_ROOT "D:/TranKhoiNguyen2023/Fintech/snake/SFML-3.0.0-windows-gcc-14.2.0-mingw-64-bit/SFML-3.0.0")

# Include SFML headers
include_directories("${SFML_ROOT}/include")

# Link SFML libraries
link_directories("${SFML_ROOT}/lib")

# Create executable
add_executable(snake main.cpp
        Snake.h)

# Link SFML dynamically
target_link_libraries(snake sfml-graphics sfml-window sfml-system)



