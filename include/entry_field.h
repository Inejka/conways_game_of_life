//
// Created by inejka on 20.09.2020.
//

#ifndef CONWAYS_GAME_OF_LIFE_ENTRY_FIELD_H
#define CONWAYS_GAME_OF_LIFE_ENTRY_FIELD_H

#include "../main.h"

class windows;

class entry_field{
    int now_text=1;
    int width, heigth;
    sf::Sprite its_sprite;
    sf::Texture its_textrue;
    sf::Font its_font;
    sf::Text its_text , its_input;
public:
    void escape_reaction();
    void work_with_keyboard(sf::Event);
    entry_field(int, int, int, int, std::string,int);
    bool is_active = false ;
    void draw(windows *);
    bool is_pressed(int , int);
    int get_int();
    std::string get_string();
};


#endif //CONWAYS_GAME_OF_LIFE_ENTRY_FIELD_H
