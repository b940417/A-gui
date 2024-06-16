#include "Human.h"
#include "Elf.h"
#include "Cyberdemon.h"
#include "Balrog.h"

int main() {
    srand(static_cast<unsigned int>(time(0)));

    Human human(20, 30);
    Elf elf(15, 25);
    Cyberdemon cyberdemon(25, 40);
    Balrog balrog(30, 50);

    Creature* creatures[] = { &human, &elf, &cyberdemon, &balrog };

    for (int i = 0; i < 10; ++i) {
        for (Creature* creature : creatures) {
            cout << creature->getSpecies() << " inflicts " << creature->getDamage() << " damage!" << endl;
        }
        cout << "-----------------" << endl;
    }

    return 0;
}