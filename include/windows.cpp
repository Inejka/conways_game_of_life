//
// Created by inejka on 18.09.2020.
//

#include "windows.h"
#include "do_button.h"
#include "game_of_life.h"

main_window_otd::main_window_otd(sf::VideoMode a, std::string b) : windows(a, b) {
    can_be_calculated_without_event=false;
    buttons.push_back(new button(10, 10, 100, 100, "nu takoe", "ss", mv_add, 30));
}

void main_window_otd::draw() {
    clear(sf::Color::White);
    std::for_each(buttons.begin(), buttons.end(), [this](button *tmp) { tmp->draw(this); });
    display();
}

void main_window_otd::process(sf::Event event, std::vector<windows *> *low) {
    if (event.type == sf::Event::Closed)this->close();
    if (event.type == sf::Event::MouseButtonPressed)
        std::for_each(buttons.begin(), buttons.end(), [event, low, this](button *tmp) {
            sf::RenderWindow *tmp1 = static_cast<sf::RenderWindow *>(this);
            tmp->is_pressed(sf::Mouse::getPosition(*tmp1).x, sf::Mouse::getPosition(*tmp1).y);
        });
    if (event.type == sf::Event::MouseButtonReleased)
        std::for_each(buttons.begin(), buttons.end(), [event, low, this](button *tmp) {
            if(tmp->was_pressed())
                tmp->just_do_it(low, this);
        });
}

windows::windows(sf::VideoMode a, std::string b) : sf::RenderWindow(a, b) {}

void game_window_otd::draw() {
    clear(sf::Color::Black);
    float sq_size_x=getSize().x/(its_game->get_size_x()*11/10-(float)1/10);
    float sq_size_y=getSize().y/(its_game->get_size_y()*11/10-(float)1/10);
    sf::RectangleShape to_draw;
    to_draw.setSize({sq_size_x,sq_size_y});
    for(int i = 0 ; i < its_game->get_size_x() ; i++)
        for(int j = 0 ; j < its_game->get_size_y() ; j++){
            to_draw.setPosition(i*(sq_size_x/10+sq_size_x),j*(sq_size_y/10+sq_size_y));
            if(its_game->get_mtr(i,j))
                to_draw.setFillColor(sf::Color::Red); else to_draw.setFillColor(sf::Color::White);
            sf::RenderWindow::draw(to_draw);
        }
    display();
}

void game_window_otd::process(sf::Event event, std::vector<windows *> *low) {
    if (event.type == sf::Event::Closed)this->close();
    if (event.type == sf::Event::KeyPressed){
        switch (event.key.code) {
            case sf::Keyboard::R:
                its_game->random_spawn();
                break;
            case sf::Keyboard::N:
                its_game->next_step();
                break;
            case sf::Keyboard::S:
                can_be_calculated_without_event=!can_be_calculated_without_event;
        }
    }
}

game_window_otd::game_window_otd(sf::VideoMode a, std::string b,int x , int y) :windows(a,b){
    can_be_calculated_without_event = true;
    its_game=new game_of_life(x,y);
    its_game->random_spawn();

}

void game_window_otd::process() {
    its_game->next_step();
}
