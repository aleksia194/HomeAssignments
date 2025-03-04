/*     Assignment3 Babikov Aleksandr st135743@student.spbu.ru     */


#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>
#include <cstdint>

class Weapon {
public:
    Weapon(const std::string& name, uint32_t damage);
    ~Weapon();

    std::string getName() const;
    uint32_t getDamage() const;

    void setName(const std::string& name);
    void setDamage(uint32_t damage);

    void attack() const;

private:
    std::string _name;  // Название оружия
    uint32_t _damage;   // Урон
};

#endif // WEAPON_H
