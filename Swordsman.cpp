//
//  Swordsman.cpp
//  Game of Medieval Times
//
//  Created by Nahom Molla on 11/8/18.
//  Copyright © 2018 Nahom Molla. All rights reserved.
//  Submission to Prof. John Sterling
//

#include "Swordsman.hpp"
using namespace std;

namespace WarriorCraft {
    Swordsman::Swordsman(const string& name, double strength) : Warrior(name, strength) {}
    void Swordsman::attack() const {
        cout << "CLANG! ";
        Warrior::attack();
    }
}
