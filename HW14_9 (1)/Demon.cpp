#include "Demon.h"

Demon::Demon() : Creature() {}

Demon::Demon(int newStrength, int newHit) : Creature(newStrength, newHit) {}

int Demon::getDamage() const {
    int damage = Creature::getDamage();
    if ((rand() % 100) < 5) {
        cout << "Demonic attack inflicts 50 additional damage points!" << endl;
        damage += 50;
    }
    return damage;
}