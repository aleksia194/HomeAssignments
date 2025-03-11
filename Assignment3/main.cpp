/*     Assignment3 Babikov Aleksandr st135743@student.spbu.ru     */


#include "Transformer.h"
#include "Weapon.h"

int main() {
    Transformer optimus;
    Weapon blaster("Blaster", 50);
    Weapon sword("Energy Sword", 80);

    optimus.equipWeapon(&blaster);
    optimus.attack();

    optimus.equipWeapon(&sword);
    optimus.attack();

    return 0;
}
