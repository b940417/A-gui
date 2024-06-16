#ifndef DEMON_H
#define DEMON_H

#include "Creature.h"

class Demon : public Creature {
public:
    Demon();
    Demon(int newStrength, int newHit);

    string getSpecies() const override = 0;
    int getDamage() const override;
};

#endif // DEMON_H