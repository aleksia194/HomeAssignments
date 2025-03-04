/*     Assignment3 Babikov Aleksandr st135743@student.spbu.ru     */


#include "Transformer.h"

Transformer::Transformer() 
    : _level(1), _strength(100), _range(50), _fuel(100), _ammo(10), _shape_robot(true), _engine(500, 80) {
    std::cout << "Transformer created" << std::endl;
}

Transformer::~Transformer() {
    std::cout << "Transformer destroyed" << std::endl;
}

bool Transformer::move() {
    return true;
}

bool Transformer::turn(int dir) {
    return true;
}

bool Transformer::jump() {
    return true;
}

bool Transformer::fire() {
    return true;
}

bool Transformer::ultimate() {
    return true;
}

bool Transformer::transform() {
    return true;
}

bool Transformer::refueling(uint32_t fuel) {
    _fuel += fuel;
    return true;
}
