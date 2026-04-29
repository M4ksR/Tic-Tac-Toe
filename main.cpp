#include <iostream>
#include <string>

#include "src/ClassGame.hpp"

int main() {

    while (true) {

        std::string input;
        std::cout << "Choose the game mode: (WithBot - 1 / WithoutBot - 2)" << std::endl;
        std::cout << "> ";

        std::cin >> input;

        if (input == "quit") {
            return 0;
        }

        mode setting = mode::NotDefined;
        if (input == std::string(1,'1')) { setting = mode::WithBot; }
        else if (input == std::string(1,'2')) { setting = mode::WithoutBot; }

        if (setting == mode::NotDefined) {
            std::cout << std::endl << "Invalid game mode" << std::endl << std::endl;
            continue;
        }

        std::cout << "Choose the board size: (3 - 6)" << std::endl;
        std::cout << "> ";
        std::cin >> input;

        int choice;
        
        try { 
            choice = std::stoi(input);
            if (choice < 3 || choice > 6) { 
                throw std::invalid_argument("Invalid board size"); 
            }    
        }
        catch(const std::invalid_argument&) {
            std::cout << std::endl << "Invalid board size" << std::endl << std::endl;
            continue; 
        }

        Game game(setting, choice);

    }

    return 0;
}
