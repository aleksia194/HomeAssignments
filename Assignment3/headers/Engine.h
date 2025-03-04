/*     Assignment3 Babikov Aleksandr st135743@student.spbu.ru     */


#ifndef ENGINE_H
#define ENGINE_H

#include <cstdint>
#include <iostream>

class Engine {
public:
    Engine(uint32_t power, uint32_t efficiency);
    ~Engine();

    uint32_t getPower() const;
    uint32_t getEfficiency() const;

    void setPower(uint32_t power);
    void setEfficiency(uint32_t efficiency);

    void boost();

private:
    uint32_t _power;       
    uint32_t _efficiency;  
};

#endif // ENGINE_H