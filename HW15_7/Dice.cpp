#include "Dice.h"

Dice::Dice() {
    numSides = 6;
    srand(static_cast<unsigned int>(time(NULL))); // Seeds random number generator
}

Dice::Dice(int numSides) {
    this->numSides = numSides;
    srand(static_cast<unsigned int>(time(NULL))); // Seeds random number generator
}

int Dice::rollDice() const {
    return (rand() % numSides) + 1;
}

int rollTwoDice(const Dice& die1, const Dice& die2) {
    return die1.rollDice() + die2.rollDice();
}