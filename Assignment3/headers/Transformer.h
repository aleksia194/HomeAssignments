/*     Assignment3 Babikov Aleksandr st135743@student.spbu.ru     */


#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include "Engine.h"
#include "Weapon.h"

class Transformer {
public:
    Transformer();
    ~Transformer();

    bool move();
    bool turn(int dir);
    bool jump();
    bool fire();
    bool ultimate();
    bool transform();
    bool refueling(uint32_t fuel);
    void equipWeapon(Weapon* weapon);
    void attack();

private:
    uint32_t _level;
    uint32_t _strength;
    uint32_t _range;
    uint32_t _fuel;
    uint32_t _ammo;
    bool _shape_robot;
    
    Engine _engine;    
    Weapon* _weapon;   
};

#endif // TRANSFORMER_H
