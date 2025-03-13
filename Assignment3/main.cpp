/*     Assignment3 Babikov Aleksandr st135743@student.spbu.ru     */


#include <iostream>
#include "Transformer.h"

int main() {
    Transformer optimus("Optimus Prime", 90, 80, 100, 70);

    std::cout << "Name: " << optimus.getName() << "\n";
    std::cout << "Strength: " << optimus.getStrength() << "\n";
    std::cout << "Speed: " << optimus.getSpeed() << "\n";
    std::cout << "Fuel: " << optimus.getFuel() << "\n";
    std::cout << "Armor: " << optimus.getArmor() << "\n";

    optimus.transform();
    optimus.attack();
    optimus.refuel(50);

    return 0;
}

