//
// Created by inejka on 18.09.2020.
//

#ifndef CONWAYS_GAME_OF_LIFE_WINDOWS_H
#define CONWAYS_GAME_OF_LIFE_WINDOWS_H

#include "../main.h"
#include "button.h"
#include "game_of_life.h"

class windows : public sf::RenderWindow {
public:
    bool can_be_calculated_without_event;
    windows(sf::VideoMode,std::string);
    virtual void draw() = 0;
    virtual void process(sf::Event,std::vector <windows*>*) = 0;
    virtual void process()=0;
};

class game_window_otd : public windows{
    std::vector<button*> buttons;
    int sq_size_x=10 , sq_size_y=10 , greed_size = 2 ;
    game_of_life *its_game= nullptr;
public:
    game_window_otd(sf::VideoMode,std::string,int,int);
    void draw();
    void process(sf::Event,std::vector <windows*>*);
    void process();
};

class main_window_otd : public windows{
    std::vector<button*> buttons;
public:
    main_window_otd(sf::VideoMode,std::string);
    void draw();
    void process(sf::Event,std::vector <windows*>*);
    void process(){}
};


#endif //CONWAYS_GAME_OF_LIFE_WINDOWS_H
