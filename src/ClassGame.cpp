#include "ClassGame.hpp"

std::ostream& operator<<(std::ostream& out, const Game& game) {
    const int size = game.size;
    const char* data = game.data;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            out << data[i * size + j]; 
            if (j != size - 1) { out << " | "; }
            else { out << '\n'; }
        }
        if (i != size - 1) {
            out << std::string(size * 4 - 3, '-') << '\n';
        }
    }
    return out;
}
