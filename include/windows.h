//
// Created by inejka on 18.09.2020.
//

#ifndef CONWAYS_GAME_OF_LIFE_WINDOWS_H
#define CONWAYS_GAME_OF_LIFE_WINDOWS_H

#include "../main.h"
#include "button.h"
#include "game_of_life.h"
#include "entry_field.h"

class windows : public sf::RenderWindow {
public:
    bool can_be_calculated_without_event;

    windows(sf::VideoMode, std::string);

    virtual void draw() = 0;

    virtual void process(sf::Event, std::vector<windows *> *) = 0;

    virtual void process() = 0;
};

class game_window_otd : public windows {
    std::vector<button *> buttons;
    float sq_size = 10.0, greed_size = 1.0;
    game_of_life *its_game = nullptr;
public:
    void resize(int = 0, int = 0);

    bool click_mode = false;

    game_window_otd(sf::VideoMode, std::string, int, int);

    void set_sq_size(int a){sq_size=a;}
    void set_gr_size(int a){greed_size=a;}

    void draw();

    void process(sf::Event, std::vector<windows *> *);

    void process();

    void set_fps_limit(int fps){setFramerateLimit(fps);}
};

class main_window_otd : public windows {
    std::vector<button *> buttons;
    entry_field *active_field = nullptr;
public:
    std::map<std::string, entry_field *> entry_fields;

    main_window_otd(sf::VideoMode, std::string);

    void draw();

    void process(sf::Event, std::vector<windows *> *);

    void process() {}
};


#endif //CONWAYS_GAME_OF_LIFE_WINDOWS_H
