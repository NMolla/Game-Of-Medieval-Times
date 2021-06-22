//
//  Lord.hpp
//  Game of Medieval Times
//
//  Created by Nahom Molla on 11/8/18.
//  Copyright © 2018 Nahom Molla. All rights reserved.
//  Submission to Prof. John Sterling
//

#ifndef Lord_hpp
#define Lord_hpp

#include "Noble.hpp"
#include <vector>

namespace WarriorCraft {
    class Protector;
    
    class Lord : public Noble {
    public:
        Lord(const std::string& name);
        
        bool hires(Protector& protectorToHire);
        bool fire(Protector& protectorToFire);
        bool release(Protector& protectorToRelease);
        
    private:
        bool alive=true;
        std::vector<Protector*> protectors;
        
        bool isAlive() const override;
        double getStrength() const override;
        void fight() const override;
        void kill() override;
        void reduceStrength(double opponentStrength) override;
        size_t findProtector(Protector& protectorToFind) const;
    };
}
#endif /* Lord_hpp */
