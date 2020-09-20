//
// Created by inejka on 18.09.2020.
//

#include "main_window.h"
#include "button.h"

main_window::main_window() {
}

main_window::~main_window() {

}

void main_window::init() {
    list_of_windows.push_back(new main_window_otd(sf::VideoMode(350, 250), "Main window"));
}

void main_window::run() {
    sf::Event main_event;
    while (list_of_windows.size() > 0) {
        for (int i = 0; i < list_of_windows.size(); i++)
            if (!list_of_windows[i]->isOpen())
                list_of_windows.erase(list_of_windows.begin() + i);
        std::vector<windows *> *low = &list_of_windows;
        for (int i = 0; i < list_of_windows.size(); i++)
            if (list_of_windows[i]->pollEvent(main_event))
                list_of_windows[i]->process(main_event, low);
        /*std::for_each(list_of_windows.begin(), list_of_windows.end(),
                      [&main_event,&low](windows *tmp) {
                          if (tmp->pollEvent(main_event))
                              tmp->process(main_event,low);
                      });*/
        std::for_each(list_of_windows.begin(), list_of_windows.end(), [](windows *tmp) {
            if (tmp->can_be_calculated_without_event)
                tmp->process();
        });
        std::for_each(list_of_windows.begin(), list_of_windows.end(),
                      [&main_event, &low](windows *tmp) {
                          sf::Event ff;
                          windows *tr = dynamic_cast<game_window_otd *>(tmp);
                          if (tr)tr->process(ff, low);
                      });
        std::for_each(list_of_windows.begin(), list_of_windows.end(), [](windows *tmp) { tmp->draw(); });
    }
}

void main_window::end() {

}
