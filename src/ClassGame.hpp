#pragma once

#include <iostream>

enum class mode{NotDefined, WithBot, WithoutBot};

class Game {
    char* data;
    int size; 
public:
    Game(mode sel, int num) : size(num) { 
        data = new char[size * size]; 
        for (int i = 0; i < size * size; ++i) {
            data[i] = ' ';
        }
    } 
    ~Game() { delete[] data; }
    
    void SeeBoard() const { std::cout << *this; }
    friend std::ostream& operator<<(std::ostream&, const Game&);
};
