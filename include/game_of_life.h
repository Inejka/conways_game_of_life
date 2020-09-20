//
// Created by inejka on 19.09.2020.
//

#ifndef TEST_GAME_OF_LIFE_H
#define TEST_GAME_OF_LIFE_H


class game_of_life {
    bool **matrix;
    int size_x , size_y ;
    game_of_life();
public:
    const int get_size_x(){return size_x;};
    const int get_size_y(){return size_y;};
    game_of_life(int,int);
    void random_spawn();
    void next_step();
    void print();
    const bool get_mtr(int , int );
    void set(bool,int ,int);

};


#endif //TEST_GAME_OF_LIFE_H
