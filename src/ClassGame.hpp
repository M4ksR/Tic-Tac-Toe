#pragma once

enum class mode{NotDefined, WithBot, WithoutBot};

class Game {
    char* data;
    int size; 
public:
    Game(mode sel, int num) : size(num) { data = new char[size * size]; } 
    ~Game() { delete[] data; }
};
