#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>

class Transformer {
public:
    Transformer();
    bool move();
    bool turn(Direction dir);
    bool jump();
    bool fire();
    bool ultimate();
    bool transform();
    bool refueling(fuel);
private:
    uint _level;
    uint _strength;
    uint _range;
    uint _fuel;
    uint _ammo;
    bool _shape_robot
    

}

