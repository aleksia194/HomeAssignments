/*     Assignment3 Babikov Aleksandr st135743@student.spbu.ru     */


#include "Weapon.h"

Weapon::Weapon(const std::string& name, uint32_t damage)
    : _name(name), _damage(damage) {
    std::cout << "Weapon " << _name << " created with damage: " << _damage << std::endl;
}

Weapon::~Weapon() {
    std::cout << "Weapon " << _name << " destroyed" << std::endl;
}

std::string Weapon::getName() const {
    return _name;
}

uint32_t Weapon::getDamage() const {
    return _damage;
}

void Weapon::setName(const std::string& name) {
    _name = name;
}

void Weapon::setDamage(uint32_t damage) {
    _damage = damage;
}

void Weapon::attack() const {
    std::cout << "Weapon " << _name << " attacks with damage: " << _damage << std::endl;
}
