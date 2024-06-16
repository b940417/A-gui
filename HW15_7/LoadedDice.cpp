#include "LoadedDice.h"

LoadedDice::LoadedDice() : Dice() {}

LoadedDice::LoadedDice(int numSides) : Dice(numSides) {}

int LoadedDice::rollDice() const {
    if (rand() % 2 == 0) {
        return numSides; // 50% chance to return the largest number possible
    }
    else {
        return Dice::rollDice();
    }
}