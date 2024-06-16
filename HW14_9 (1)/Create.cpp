#include "Creature.h"

Creature::Creature() : strength(10), hitpoints(10) {}

Creature::Creature(int newStrength, int newHit) : strength(newStrength), hitpoints(newHit) {}

int Creature::getStrength() const {
    return strength;
}

void Creature::setStrength(int newStrength) {
    strength = newStrength;
}

int Creature::getHitpoints() const {
    return hitpoints;
}

void Creature::setHitpoints(int newHit) {
    hitpoints = newHit;
}

int Creature::getDamage() const {
    int damage = (rand() % strength) + 1;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;
    return damage;
}