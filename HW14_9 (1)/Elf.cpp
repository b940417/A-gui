#include "Elf.h"

Elf::Elf() : Creature() {}

Elf::Elf(int newStrength, int newHit) : Creature(newStrength, newHit) {}

string Elf::getSpecies() const {
    return "Elf";
}

int Elf::getDamage() const {
    int damage = Creature::getDamage();
    if ((rand() % 10) == 0) {
        cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
        damage *= 2;
    }
    return damage;
}