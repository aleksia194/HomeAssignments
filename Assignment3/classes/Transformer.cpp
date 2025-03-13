/*     Assignment3 Babikov Aleksandr st135743@student.spbu.ru     */


#include "Transformer.h"
#include <iostream>

Transformer::Transformer(const std::string& name, uint32_t strength, uint32_t speed, uint32_t fuel, uint32_t armor)
    : _name(name), _strength(strength), _speed(speed), _fuel(fuel), _armor(armor), _engine(100, 75), _weapon(nullptr) {}


Transformer::~Transformer() {
    std::cout << "Transformer " << _name << " destroyed\n";
}

std::string Transformer::getName() const { return _name; }
uint32_t Transformer::getStrength() const { return _strength; }
uint32_t Transformer::getSpeed() const { return _speed; }
uint32_t Transformer::getFuel() const { return _fuel; }
uint32_t Transformer::getArmor() const { return _armor; }

void Transformer::setName(const std::string& name) { _name = name; }
void Transformer::setStrength(uint32_t strength) { _strength = strength; }
void Transformer::setSpeed(uint32_t speed) { _speed = speed; }
void Transformer::setFuel(uint32_t fuel) { _fuel = fuel; }
void Transformer::setArmor(uint32_t armor) { _armor = armor; }

void Transformer::transform() {
    std::cout << _name << " is transforming...\n";
}

bool Transformer::attack() {
    if (_weapon) {
        std::cout << _name << " attacks with " << _weapon->getName() << " for " << _weapon->getDamage() << " damage!\n";
        return 1;
    } else {
        std::cout << _name << " has no weapon to attack with!\n";
        return 0;
    }
}

void Transformer::refuel(uint32_t amount) {
    _fuel += amount;
    std::cout << _name << " refueled by " << amount << ". New fuel: " << _fuel << "\n";
}

void Transformer::equipWeapon(Weapon* weapon) {
    _weapon = weapon;
    std::cout << _name << " equipped with " << weapon->getName() << "\n";
}

void Transformer::unequipWeapon() {
    if (_weapon) {
        std::cout << _name << " unequipped " << _weapon->getName() << "\n";
        _weapon = nullptr;
    } else {
        std::cout << _name << " has no weapon to unequip!\n";
    }
}
