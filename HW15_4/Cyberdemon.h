#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include "Demon.h"

class Cyberdemon : public Demon {
public:
    Cyberdemon();
    Cyberdemon(int newStrength, int newHit);

    string getSpecies() const override;
};

#endif // CYBERDEMON_H