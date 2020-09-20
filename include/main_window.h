//
// Created by inejka on 18.09.2020.
//

#ifndef CONWAYS_GAME_OF_LIFE_MAIN_WINDOW_H
#define CONWAYS_GAME_OF_LIFE_MAIN_WINDOW_H

#include "../main.h"
#include "windows.h"

class main_window {
    std::vector <windows*> list_of_windows;
public:
    main_window();
    ~main_window();
    void init();
    void run();
    void end();
};


#endif //CONWAYS_GAME_OF_LIFE_MAIN_WINDOW_H
