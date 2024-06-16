#include "Cyberdemon.h"

Cyberdemon::Cyberdemon() : Demon() {}

Cyberdemon::Cyberdemon(int newStrength, int newHit) : Demon(newStrength, newHit) {}

string Cyberdemon::getSpecies() const {
    return "Cyberdemon";
}