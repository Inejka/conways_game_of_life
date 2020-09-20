//
// Created by inejka on 18.09.2020.
//

#include "windows.h"
#include "do_button.h"
#include "game_of_life.h"

main_window_otd::main_window_otd(sf::VideoMode a, std::string b) : windows(a, b) {
    can_be_calculated_without_event = false;
    buttons.push_back(new button(0, 0, 200, 50, "create new game window", mv_add, 10));
    buttons.push_back(new button(0, 50, 200, 50, "resize", mw_resize, 10));
    buttons.push_back(new button(0, 100, 200, 50, "close all", mw_close_all, 10));
    buttons.push_back(new button(0,150,200,50,"change sizes",mw_resize_gr_sq,10));
    buttons.push_back(new button(0,200,200,50,"set fps",mw_set_fps_limit,10));
    entry_fields.insert(std::make_pair((std::string) "width", new entry_field(200, 0, 50, 50, "width", 10)));
    entry_fields.insert(std::make_pair((std::string) "heigth", new entry_field(200, 50, 50, 50, "heigth", 10)));
    entry_fields.insert(std::make_pair((std::string) "greed_size", new entry_field(250, 0, 100, 50, "greed_size", 10)));
    entry_fields.insert(std::make_pair((std::string) "square_size", new entry_field(250, 50, 100, 50, "square_size", 10)));
    entry_fields.insert(std::make_pair((std::string) "FPS", new entry_field(200, 100, 50 , 50, "FPS", 10)));

}

void main_window_otd::draw() {
    clear(sf::Color::White);
    std::for_each(buttons.begin(), buttons.end(), [this](button *tmp) { tmp->draw(this); });
    for (auto f = entry_fields.begin(); f != entry_fields.end(); f++)
        f->second->draw(this);
    display();
}

void main_window_otd::process(sf::Event event, std::vector<windows *> *low) {
    if (event.type == sf::Event::TextEntered && active_field)
        active_field->work_with_keyboard(event);
    if (event.type == sf::Event::KeyPressed)
        switch (event.key.code) {
            case sf::Keyboard::BackSpace:
                if (active_field)active_field->escape_reaction();
                break;
        }
    if (event.type == sf::Event::Closed)this->close();
    if (event.type == sf::Event::MouseButtonPressed)
        std::for_each(buttons.begin(), buttons.end(), [event, low, this](button *tmp) {
            sf::RenderWindow *tmp1 = static_cast<sf::RenderWindow *>(this);
            tmp->is_pressed(sf::Mouse::getPosition(*tmp1).x, sf::Mouse::getPosition(*tmp1).y);
        });
    if (event.type == sf::Event::MouseButtonPressed){
    active_field= nullptr;
        for (auto &i:entry_fields)
            if (i.second->is_pressed(sf::Mouse::getPosition(*static_cast<sf::RenderWindow *>(this)).x,
                                     sf::Mouse::getPosition(*static_cast<sf::RenderWindow *>(this)).y))
                active_field = i.second;
    }
    if (event.type == sf::Event::MouseButtonReleased)
        std::for_each(buttons.begin(), buttons.end(), [event, low, this](button *tmp) {
            if (tmp->was_pressed())
                tmp->just_do_it(low, this);
        });
}

windows::windows(sf::VideoMode a, std::string b) : sf::RenderWindow(a, b) {}

void game_window_otd::draw() {
    clear(sf::Color::Black);
    sf::RectangleShape to_draw;
    to_draw.setSize({sq_size, sq_size});
    for (int i = 0; i < its_game->get_size_x(); i++)
        for (int j = 0; j < its_game->get_size_y(); j++) {
            to_draw.setPosition(j * (greed_size + sq_size), i * (greed_size + sq_size));
            if (its_game->get_mtr(i, j))
                to_draw.setFillColor(sf::Color::Red);
            else to_draw.setFillColor(sf::Color::White);
            sf::RenderWindow::draw(to_draw);
        }
    display();
}

void game_window_otd::process(sf::Event event, std::vector<windows *> *low) {
    if (event.type == sf::Event::Closed)this->close();
    if (event.type == sf::Event::MouseButtonPressed && !click_mode) {
        float mouse_x = sf::Mouse::getPosition(
                *(dynamic_cast<sf::RenderWindow *>(this))).x, mouse_y = sf::Mouse::getPosition(
                *(dynamic_cast<sf::RenderWindow *>(this))).y;
        mouse_x /= (sq_size + greed_size);
        mouse_y /= (sq_size + greed_size);
        its_game->set(!its_game->get_mtr((int) mouse_y, (int) mouse_x), (int) mouse_y, (int) mouse_x);
    }
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && click_mode && hasFocus()) {
        float mouse_x = sf::Mouse::getPosition(
                *(dynamic_cast<sf::RenderWindow *>(this))).x, mouse_y = sf::Mouse::getPosition(
                *(dynamic_cast<sf::RenderWindow *>(this))).y;
        mouse_x /= (sq_size + greed_size);
        mouse_y /= (sq_size + greed_size);
        its_game->set(true, (int) mouse_y, (int) mouse_x);
    }
    if (event.type == sf::Event::KeyPressed) {
        switch (event.key.code) {
            case sf::Keyboard::M:
                click_mode = !click_mode;
                break;
            case sf::Keyboard::R:
                its_game->random_spawn();
                break;
            case sf::Keyboard::C:
                its_game->clear();
                break;
            case sf::Keyboard::N:
                its_game->next_step();
                break;
            case sf::Keyboard::S:
                can_be_calculated_without_event = !can_be_calculated_without_event;
        }
    }
}

game_window_otd::game_window_otd(sf::VideoMode a, std::string b, int x, int y) : windows(a, b) {
    can_be_calculated_without_event = true;
    its_game = new game_of_life(x, y);
    {
        // update the view to the new size of the window
        sf::FloatRect visibleArea(0, 0, (unsigned int) (sq_size * y + (y - 1) * greed_size),
                                  (unsigned int) (sq_size * x + (x - 1) * greed_size));
        setView(sf::View(visibleArea));
    }
    setSize({(unsigned int) (sq_size * y + (y - 1) * greed_size),
             (unsigned int) (sq_size * x + (x - 1) * greed_size)});
    its_game->random_spawn();
    setFramerateLimit(0);
}

void game_window_otd::process() {
    its_game->next_step();
}

void game_window_otd::resize(int x, int y) {
    if(x!=0 && y!=0)
    its_game->resize(x, y); else {
        x = its_game->get_size_x();
        y = its_game->get_size_y();
    }
    {
        // update the view to the new size of the window
        sf::FloatRect visibleArea(0, 0, (unsigned int) (sq_size * y + (y - 1) * greed_size),
                                  (unsigned int) (sq_size * x + (x - 1) * greed_size));
        setView(sf::View(visibleArea));
    }
    setSize({(unsigned int) (sq_size * y + (y - 1) * greed_size),
             (unsigned int) (sq_size * x + (x - 1) * greed_size)});
    its_game->random_spawn();
}
