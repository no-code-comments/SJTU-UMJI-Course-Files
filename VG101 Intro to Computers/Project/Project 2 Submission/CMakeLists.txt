cmake_minimum_required(VERSION 2.7)

set(CMAKE_C_STANDARD 11)
set(SOURCE_FILES main.c)
set(CMAKE_C_FLAGS "-std=c11 -pedantic -Wall -Wextra -Werror")

add_executable(LotTK ${SOURCE_FILES})
