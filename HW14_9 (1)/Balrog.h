#ifndef BALROG_H
#define BALROG_H

#include "Demon.h"

class Balrog : public Demon {
public:
    Balrog();
    Balrog(int newStrength, int newHit);

    string getSpecies() const override;
    int getDamage() const override;
};

#endif // BALROG_H