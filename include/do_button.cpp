//
// Created by inejka on 19.09.2020.
//

#include "do_button.h"
#include "windows.h"

void mw_close(std::vector<windows*>*lowa,windows *working_window){
    working_window->close();
}

void mv_add(std::vector<windows*>*lowa,windows*working_window){
    lowa->push_back(new game_window_otd(sf::VideoMode(600, 600), "Test",10,70));
}