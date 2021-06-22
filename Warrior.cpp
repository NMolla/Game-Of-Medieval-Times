//
//  Warrior.cpp
//  Game of Medieval Times
//
//  Created by Nahom Molla on 11/8/18.
//  Copyright © 2018 Nahom Molla. All rights reserved.
//  Submission to Prof. John Sterling
//

#include "Warrior.hpp"
#include "Lord.hpp"
using namespace std;

namespace WarriorCraft {
    Warrior::Warrior(const string& name, double strength) : Protector(name, strength) {}
    void Warrior::attack() const {
        cout << getName() << " says: Take that in the name of my lord, "
            << getEmployer()->getName() << endl;
    }
}
