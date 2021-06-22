//
//  Wizard.cpp
//  Game of Medieval Times
//
//  Created by Nahom Molla on 11/8/18.
//  Copyright © 2018 Nahom Molla. All rights reserved.
//  Submission to Prof. John Sterling
//

#include "Wizard.hpp"
using namespace std;

namespace WarriorCraft {
    Wizard::Wizard(const string& name, double strength) : Protector(name, strength) {}
    void Wizard::attack() const { cout << "POOF!" << endl; }
}
