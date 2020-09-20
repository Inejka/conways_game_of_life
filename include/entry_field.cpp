//
// Created by inejka on 20.09.2020.
//

#include "entry_field.h"
#include "windows.h"

//
// Created by inejka on 18.09.2020.
//

#include "button.h"
#include "windows.h"

entry_field::entry_field(int x, int y, int width1, int heigth1, std::string name,int button_size) {
    its_textrue.loadFromFile("../files/3.png");
    heigth = heigth1;
    width = width1;
    its_sprite.setPosition(x, y);
    its_sprite.setTexture(its_textrue);
    float widget_width = (float) width1 / (float) its_textrue.getSize().x, widget_heigth =
            (float) heigth1 / (float) its_textrue.getSize().y;
    its_sprite.setScale(widget_width, widget_heigth);
    its_font.loadFromFile("../files/aa.ttf");
    its_text.setFont(its_font);
    its_text.setFillColor(sf::Color::Black);
    its_text.setCharacterSize(button_size);
    its_text.setString(name);
    its_input.setFillColor(sf::Color::Black);
    its_input.setFont(its_font);
    its_input.setCharacterSize(button_size);
}

void entry_field::draw(windows *tmp) {
    if(is_active&&now_text==1){
        now_text=2;
        its_textrue.loadFromFile("../files/4.png");
        its_sprite.setTexture(its_textrue);
    }
    else if(!is_active&&now_text==2){
        now_text=1;
        its_textrue.loadFromFile("../files/3.png");
        its_sprite.setTexture(its_textrue);
    }
    its_text.setPosition(its_sprite.getPosition().x + width / 2 - its_text.getLocalBounds().width / 2,
                         its_sprite.getPosition().y );
    its_input.setPosition(its_sprite.getPosition().x-5+width-its_input.getLocalBounds().width,
                          its_sprite.getPosition().y-5+heigth-its_input.getLocalBounds().height);
    tmp->sf::RenderWindow::draw(its_sprite);
    tmp->sf::RenderWindow::draw(its_text);
    tmp->sf::RenderWindow::draw(its_input);
}

bool entry_field::is_pressed(int mouse_x , int mouse_y) {
    if (its_sprite.getPosition().x < mouse_x && its_sprite.getPosition().x + width > mouse_x &&
        its_sprite.getPosition().y < mouse_y && its_sprite.getPosition().y + heigth > mouse_y)
        is_active = true ; else is_active = false ;
    return is_active;
}

void entry_field::work_with_keyboard(sf::Event event) {
    if(event.text.unicode >= '0' && event.text.unicode <= 'z' && its_input.getLocalBounds().width+its_input.getCharacterSize() + 10 < width)
    its_input.setString(its_input.getString()+event.text.unicode);
}

void entry_field::escape_reaction() {
    if(!its_input.getString().isEmpty()){
        std::string tmp = its_input.getString();
        tmp.erase(tmp.size()-1);
        its_input.setString(tmp);
    }
}

long long pow10(int a){
    long long tmp = 1;
    for(int i = 0 ; i < a ; i++)
        tmp*=10;
    return tmp;
}

int entry_field::get_int() {
    int ans = 0;
    std::string tmp = its_input.getString();
    for(int i = tmp.size()-1 ; i > -1 ; i--)
        if(tmp[i]>='0' && tmp[i]<='9')
        ans+=(tmp[i]-'0')*pow10(tmp.size()-1-i);
    return ans;
}

std::string entry_field::get_string() {
    return its_input.getString();
}

