//
// Created by inejka on 18.09.2020.
//

#include "button.h"
#include "windows.h"

button::button(int x, int y, int width1, int heigth1, std::string name, void operation(std::vector <windows*>*, windows*),int button_size) {
    its_textrue.loadFromFile("../files/1.png");
    heigth = heigth1;
    width = width1;
    just_do_it = operation;
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
}

void button::draw(windows *tmp) {
    if(is_pressed_bool&&now_text==1){
        now_text=2;
        its_textrue.loadFromFile("../files/2.png");
        its_sprite.setTexture(its_textrue);
    }
    else if(!is_pressed_bool&&now_text==2){
        now_text=1;
        its_textrue.loadFromFile("../files/1.png");
        its_sprite.setTexture(its_textrue);
    }
    its_text.setPosition(its_sprite.getPosition().x + width / 2 - its_text.getLocalBounds().width / 2,
                         its_sprite.getPosition().y + heigth / 2 - its_text.getLocalBounds().height / 1.5
                         - 0.6 * its_text.getLocalBounds().height);
    tmp->sf::RenderWindow::draw(its_sprite);
    tmp->sf::RenderWindow::draw(its_text);
}

bool button::is_pressed(int mouse_x, int mouse_y) {
    if (its_sprite.getPosition().x < mouse_x && its_sprite.getPosition().x + width > mouse_x &&
        its_sprite.getPosition().y < mouse_y && its_sprite.getPosition().y + heigth > mouse_y)
        is_pressed_bool=true;
    else is_pressed_bool=false;
}
