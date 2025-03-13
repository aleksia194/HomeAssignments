/*     Assignment3 Babikov Aleksandr st135743@student.spbu.ru     */


#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include "Engine.h"
#include "Weapon.h"

class Transformer {
public:
    Transformer(const std::string& name, uint32_t strength = 300, uint32_t speed = 60, uint32_t fuel = 100, uint32_t armor = 200);
    ~Transformer();

    std::string getName() const;
    uint32_t getStrength() const;
    uint32_t getSpeed() const;
    uint32_t getFuel() const;
    uint32_t getArmor() const;

    void setName(const std::string& name);
    void setStrength(uint32_t strength);
    void setSpeed(uint32_t speed);
    void setFuel(uint32_t fuel);
    void setArmor(uint32_t armor);

    void transform();  
    bool attack();     
    void refuel(uint32_t amount); 
    void equipWeapon(Weapon* weapon);
    void unequipWeapon(); 

private:
    std::string _name;
    uint32_t _strength;
    uint32_t _speed;
    uint32_t _fuel;
    uint32_t _armor;

    Engine _engine;  
    Weapon* _weapon;
};

#endif  // TRANSFORMER_H

