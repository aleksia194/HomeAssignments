/*     Assignment3 Babikov Aleksandr st135743@student.spbu.ru     */


#include "Engine.h"

Engine::Engine(uint32_t power, uint32_t efficiency)
    : _power(power), _efficiency(efficiency) {
    std::cout << "Engine created with power: " << _power << " and efficiency: " << _efficiency << std::endl;
}

Engine::~Engine() {
    std::cout << "Engine destroyed" << std::endl;
}

uint32_t Engine::getPower() const {
    return _power;
}

uint32_t Engine::getEfficiency() const {
    return _efficiency;
}

void Engine::setPower(uint32_t power) {
    _power = power;
}

void Engine::setEfficiency(uint32_t efficiency) {
    _efficiency = efficiency;
}

void Engine::boost() {
    std::cout << "Engine boosting power!" << std::endl;
}
