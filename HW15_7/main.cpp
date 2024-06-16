#include <iostream>
#include "Dice.h"
#include "LoadedDice.h"

int main() {
    // Create two Dice objects
    Dice die1(6);
    Dice die2(8);

    std::cout << "Rolling two Dice objects:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << "Roll " << i + 1 << ": " << rollTwoDice(die1, die2) << std::endl;
    }

    // Create two LoadedDice objects
    LoadedDice loadedDie1(6);
    LoadedDice loadedDie2(8);

    std::cout << "\nRolling two LoadedDice objects:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << "Roll " << i + 1 << ": " << rollTwoDice(loadedDie1, loadedDie2) << std::endl;
    }
    
    return 0;
}