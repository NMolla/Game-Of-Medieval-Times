//
//  Archer.cpp
//  Game of Medieval Times
//
//  Created by Nahom Molla on 11/8/18.
//  Copyright © 2018 Nahom Molla. All rights reserved.
//  Submission to Prof. John Sterling
//

#include "Archer.hpp"
using namespace std;

namespace WarriorCraft {
    Archer::Archer(const string& name, double strength) : Warrior(name, strength) {}
    void Archer::attack() const {
        cout << "TWANG! ";
        Warrior::attack();
    }
}
