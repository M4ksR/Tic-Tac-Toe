#pragma once

enum class mode{NotDefined, WithBot, WithoutBot};

class Game {
    char* data;
    int row;
    int col;
    int size; 
public:
    Game(mode sel, int num) : row(num), col(num), size(num * num) {
        data = new char[size];
    } 
    ~Game() { delete[] data; }
};
