#include <ctime>
#include "Human.h"
#include "Elf.h"
#include "Cyberdemon.h"
#include "Balrog.h"

void battleArena(Creature& creature1, Creature& creature2) {
    while (creature1.getHitpoints() > 0 && creature2.getHitpoints() > 0) {
        int damage1 = creature1.getDamage();
        int damage2 = creature2.getDamage();

        creature2.setHitpoints(creature2.getHitpoints() - damage1);
        creature1.setHitpoints(creature1.getHitpoints() - damage2);

        cout << creature1.getSpecies() << " has " << creature1.getHitpoints() << " hitpoints remaining." << endl;
        cout << creature2.getSpecies() << " has " << creature2.getHitpoints() << " hitpoints remaining." << endl;

        if (creature1.getHitpoints() <= 0 && creature2.getHitpoints() <= 0) {
            cout << "The battle is a tie!" << endl;
        }
        else if (creature1.getHitpoints() <= 0) {
            cout << creature2.getSpecies() << " wins!" << endl;
        }
        else if (creature2.getHitpoints() <= 0) {
            cout << creature1.getSpecies() << " wins!" << endl;
        }
        cout << "-----------------" << endl;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    Human human(20, 30);
    Elf elf(15, 25);
    Cyberdemon cyberdemon(25, 40);
    Balrog balrog(30, 50);

    battleArena(human, elf);
    battleArena(cyberdemon, balrog);
    battleArena(human, balrog);

    return 0;
}