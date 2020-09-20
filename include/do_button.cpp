//
// Created by inejka on 19.09.2020.
//

#include "do_button.h"
#include "windows.h"
#include <iostream>
#include <ctime>

void mw_close_all(std::vector<windows*>*lowa,windows *working_window){
    for(int i = 0 ; i < lowa->size() ; i++)
        if(dynamic_cast<game_window_otd*>((*lowa)[i]))
            (*lowa)[i]->close();
}

void mv_add(std::vector<windows*>*lowa,windows*working_window){
    lowa->push_back(new game_window_otd(sf::VideoMode(600, 600), "Game window",10,70));
    (*lowa)[lowa->size()-1]->setPosition({0,0});
}

void mw_resize(std::vector<windows *> *lowa, windows *working_window) {
    auto tmp1 = dynamic_cast<main_window_otd*>(working_window)->entry_fields;
    std::vector <windows*> wtf = *lowa;
    for(int i = 0 ; i < lowa->size() ; i++){
        game_window_otd *tmp = dynamic_cast<game_window_otd*>(wtf[i]);
        if(tmp)
            tmp->resize(tmp1["width"]->get_int()
                        ,tmp1["heigth"]->get_int());
    }
}


void mw_resize_gr_sq(std::vector<windows*>*lowa,windows*working_window){
    auto tmp1 = dynamic_cast<main_window_otd*>(working_window)->entry_fields;
    std::vector <windows*> wtf = *lowa;
    for(int i = 0 ; i < lowa->size() ; i++){
        game_window_otd *tmp = dynamic_cast<game_window_otd*>(wtf[i]);
        if(tmp){
            tmp->set_gr_size(tmp1["greed_size"]->get_int());
            tmp->set_sq_size(tmp1["square_size"]->get_int());
            tmp->resize();
        }
    }
}

void mw_set_fps_limit(std::vector<windows*>*lowa,windows*working_window){
    auto tmp1 = dynamic_cast<main_window_otd*>(working_window)->entry_fields;
    std::vector <windows*> wtf = *lowa;
    for(int i = 0 ; i < lowa->size() ; i++){
        game_window_otd *tmp = dynamic_cast<game_window_otd*>(wtf[i]);
        if(tmp){
            tmp->set_fps_limit(tmp1["FPS"]->get_int());
        }
    }
}