#ifndef ELF_H
#define ELF_H

#include "Creature.h"

class Elf : public Creature {
public:
    Elf();
    Elf(int newStrength, int newHit);

    string getSpecies() const override;
    int getDamage() const override;
};

#endif // ELF_H