#include <gtest/gtest.h>
#include "Transformer.h"
#include "Weapon.h"
#include "Engine.h"


TEST(TransformerTest, Constructor) {
    Transformer t("Bumblebee", 0, 0, 0, 0);

    EXPECT_EQ(t.getName(), "Bumblebee");
    EXPECT_EQ(t.getStrength(), 0);
    EXPECT_EQ(t.getSpeed(), 0);
    EXPECT_EQ(t.getFuel(), 0);
    EXPECT_EQ(t.getArmor(), 0);
}

TEST(TransformerTest, Constructor_pass) {
    Transformer t("Gregoriy");

    EXPECT_EQ(t.getName(), "Gregoriy");
    EXPECT_EQ(t.getStrength(), 300);
    EXPECT_EQ(t.getSpeed(), 60);
    EXPECT_EQ(t.getFuel(), 100);
    EXPECT_EQ(t.getArmor(), 200);
}


TEST(TransformerTest, SettersAndGetters) {
    Transformer t("Sanek", 0, 0, 0, 0);

    t.setName("Megatron");
    t.setStrength(100);
    t.setSpeed(60);
    t.setFuel(80);
    t.setArmor(40);

    EXPECT_EQ(t.getName(), "Megatron");
    EXPECT_EQ(t.getStrength(), 100);
    EXPECT_EQ(t.getSpeed(), 60);
    EXPECT_EQ(t.getFuel(), 80);
    EXPECT_EQ(t.getArmor(), 40);
}


TEST(TransformerTest, Refuel) {
    Transformer t("prikolist", 85, 95, 50, 45);

    t.refuel(30);
    EXPECT_EQ(t.getFuel(), 80);

    t.refuel(20);
    EXPECT_EQ(t.getFuel(), 100);
}


TEST(TransformerTest, Transform) {
    Transformer t("rukanojka", 90, 85, 110, 70);
    t.transform();
}


TEST(TransformerTest, EquipAndAttack) {
    Transformer t("Ironhide", 90, 70, 90, 60);
    Weapon blaster("Blaster", 50);
    
    t.equipWeapon(&blaster);
    EXPECT_EQ(t.getName(), "Ironhide");
    EXPECT_EQ(blaster.getName(), "Blaster");

    EXPECT_EQ(t.attack(), 1);
    t.unequipWeapon();
    EXPECT_EQ(t.attack(), 0);
}
