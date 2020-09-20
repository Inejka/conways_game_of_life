//
// Created by inejka on 19.09.2020.
//

#include "game_of_life.h"
#include <ctime>
#include <iostream>

game_of_life::game_of_life(int i, int j) {
    matrix = new bool *[i + 4];
    for (int i1 = 0; i1 < i + 4; i1++)
        matrix[i1] = new bool[j+4];
    for (int i1 = 0; i1 < i + 4; i1++)
        for (int j1 = 0; j1 < j + 4; j1++)
            matrix[i1][j1] = false;
    size_x = i;
    size_y = j;
}

void game_of_life::random_spawn() {
    std::srand(time(0));
    for (int i = 0; i < size_y * size_x / 5; i++)
        matrix[2 + rand() % (size_x )][2 + rand() % (size_y )] = true;
}

void game_of_life::next_step() {
    int **mtr = new int *[size_x + 4];
    for (int i1 = 0; i1 < size_x + 4; i1++)
        mtr[i1] = new int[size_y + 4];
    for (int i1 = 0; i1 < size_x + 4; i1++)
        for (int j1 = 0; j1 < size_y + 4; j1++)
            mtr[i1][j1] = 0;
    for (int i = 0; i < size_x; i++) {
        matrix[i + 2][1] = matrix[i + 2][1 + size_y];
        matrix[i + 2][size_y + 2] = matrix[i + 2][2];
    }
    for (int i = 0; i < size_y; i++) {
        matrix[1][2 + i] = matrix[1+size_x][2 + i];
        matrix[size_x + 2][2 + i] = matrix[2][i + 2];
    }
    matrix[1][1]=matrix[1+size_x][1+size_y];
    matrix[1][2+size_y]=matrix[1+size_x][2];
    matrix[2+size_x][1]=matrix[2][1+size_y];
    matrix[2+size_x][2+size_y]=matrix[2][2];
    for (int i = 2; i < size_x + 2; i++)
        for (int j = 2; j < size_y + 2; j++) {
            mtr[i][j] += matrix[i - 1][j - 1];
            mtr[i][j] += matrix[i - 1][j];
            mtr[i][j] += matrix[i - 1][j + 1];
            mtr[i][j] += matrix[i + 1][j - 1];
            mtr[i][j] += matrix[i + 1][j + 1];
            mtr[i][j] += matrix[i + 1][j];
            mtr[i][j] += matrix[i][j - 1];
            mtr[i][j] += matrix[i][j + 1];
        }
    for (int i = 2; i < size_x + 2; i++)
        for (int j = 2; j < size_y + 2; j++) {
            if (mtr[i][j] < 2 || mtr[i][j] > 3)matrix[i][j] = false;
            else if (mtr[i][j] == 3)matrix[i][j] = true;
        }
}

void game_of_life::print() {
    for (int i = 2; i < size_x + 2; i++){
        for (int j = 2; j < size_y + 2; j++)
            if(matrix[i][j])std::cout<<1;else std::cout << 0 ;
            std::cout<<std::endl;
        }
}

const bool game_of_life::get_mtr(int x , int y) {
    if(x<size_x&&y<size_y)
    return matrix[2+x][2+y];
}

void game_of_life::set(bool tmp, int x , int y) {
    if(x<size_x&&y<size_y)
    matrix[2+x][2+y]=tmp;
}

game_of_life::~game_of_life() {
    for(int i = 0 ; i < size_x+4 ; i++)
        delete [] matrix[i];
    delete [] matrix;
}

void game_of_life::resize(int i, int j) {
    for(int i1 = 0 ; i1 < size_x+4 ; i1++)
        delete [] matrix[i1];
    delete [] matrix;
    matrix = new bool *[i + 4];
    for (int i1 = 0; i1 < i + 4; i1++)
        matrix[i1] = new bool[j+4];
    for (int i1 = 0; i1 < i + 4; i1++)
        for (int j1 = 0; j1 < j + 4; j1++)
            matrix[i1][j1] = false;
    size_x = i;
    size_y = j;
}

void game_of_life::clear(){
    for(int i = 0 ; i < size_x ; i++)
        for(int j = 0 ; j < size_y ; j++)
            matrix[i+2][j+2] = false ;
}
