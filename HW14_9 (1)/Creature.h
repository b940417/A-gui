#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Creature {
private:
    int strength;   // How much damage we can inflict
    int hitpoints;  // How much damage we can sustain

public:
    Creature();
    Creature(int newStrength, int newHit);

    int getStrength() const;
    void setStrength(int newStrength);

    int getHitpoints() const;
    void setHitpoints(int newHit);

    virtual string getSpecies() const = 0;
    virtual int getDamage() const;

    virtual ~Creature() {}  // Virtual destructor
};

#endif // CREATURE_H