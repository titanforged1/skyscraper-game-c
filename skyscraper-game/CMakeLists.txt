cmake_minimum_required(VERSION 4.2)
project(skyscraper_game C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror")
add_executable(skyscraper_game sources/main.c
        includes/ft.h
        sources/utils.c
        sources/check.c
        sources/solver.c
        sources/parser.c
)
