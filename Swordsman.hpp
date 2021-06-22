//
//  Swordsman.hpp
//  Game of Medieval Times
//
//  Created by Nahom Molla on 11/8/18.
//  Copyright © 2018 Nahom Molla. All rights reserved.
//  Submission to Prof. John Sterling
//

#ifndef Swordsman_hpp
#define Swordsman_hpp

#include "Warrior.hpp"

namespace WarriorCraft {
    class Swordsman : public Warrior {
    public:
        Swordsman(const std::string& name, double strength);
        void attack() const override;
    };
}
#endif /* Swordsman_hpp */
