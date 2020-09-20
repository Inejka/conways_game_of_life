//
// Created by inejka on 19.09.2020.
//

#ifndef CONWAYS_GAME_OF_LIFE_DO_BUTTON_H
#define CONWAYS_GAME_OF_LIFE_DO_BUTTON_H
#include "../main.h"
class windows;

void mw_close_all(std::vector<windows*>*lowa,windows*working_window);
void mv_add(std::vector<windows*>*lowa,windows*working_window);
void mw_resize(std::vector<windows*>*lowa,windows*working_window);
void mw_resize_gr_sq(std::vector<windows*>*lowa,windows*working_window);
void mw_set_fps_limit(std::vector<windows*>*lowa,windows*working_window);
#endif //CONWAYS_GAME_OF_LIFE_DO_BUTTON_H
