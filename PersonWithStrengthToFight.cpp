//
//  PersonWithStrengthToFight.cpp
//  Game of Medieval Times
//
//  Created by Nahom Molla on 11/8/18.
//  Copyright © 2018 Nahom Molla. All rights reserved.
//  Submission to Prof. John Sterling
//

#include "PersonWithStrengthToFight.hpp"
using namespace std;

namespace WarriorCraft {
    PersonWithStrengthToFight::PersonWithStrengthToFight(const string& name, double strength) :
    Noble(name), strength(strength) {}
    bool PersonWithStrengthToFight::isAlive() const { return strength != 0; }
    double PersonWithStrengthToFight::getStrength() const { return strength; }
    void PersonWithStrengthToFight::kill() { strength = 0; }
    void PersonWithStrengthToFight::fight() const { /* does nothing */ }
    void PersonWithStrengthToFight::reduceStrength(double opponentStrength) {
        strength -= opponentStrength;
    }
}
