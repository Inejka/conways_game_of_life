//
// Created by inejka on 18.09.2020.
//

#ifndef CONWAYS_GAME_OF_LIFE_BUTTON_H
#define CONWAYS_GAME_OF_LIFE_BUTTON_H

#include "../main.h"

class windows;

class button {
    bool is_pressed_bool = false;
    int now_text=1;
    int width, heigth;
    sf::Sprite its_sprite;
    sf::Texture its_textrue;
    sf::Font its_font;
    sf::Text its_text;
public:
    button(int, int, int, int, std::string, void(std::vector<windows *> *, windows *), int);

    void draw(windows *);

    void (*just_do_it)(std::vector<windows *> *, windows *);

    bool is_pressed(int, int);

    bool was_pressed() {
        if (is_pressed_bool) {
            is_pressed_bool = false;
            return true;
        }
        return false;
    };
};


#endif //CONWAYS_GAME_OF_LIFE_BUTTON_H
