cmake_minimum_required(VERSION 3.17)
project(conways_game_of_life)

set(CMAKE_CXX_STANDARD 14)

add_executable(conways_game_of_life main.cpp main.h include/main_window.cpp include/main_window.h include/windows.cpp include/windows.h include/button.cpp include/button.h include/do_button.cpp include/do_button.h include/game_of_life.cpp include/game_of_life.h include/entry_field.cpp include/entry_field.h)

find_package(SFML 2.5.1 COMPONENTS graphics audio REQUIRED)

target_link_libraries(conways_game_of_life sfml-graphics sfml-audio)