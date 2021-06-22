
game: main.o Archer.o Lord.o Noble.o PersonWithStrengthToFight.o Protector.o Swordsman.o Warrior.o Wizard.o
	g++ main.o Archer.o Lord.o Noble.o PersonWithStrengthToFight.o Protector.o Swordsman.o Warrior.o Wizard.o -o game

main.o: main.cpp
	g++ -c main.cpp

Archer.o: Archer.cpp Archer.hpp
	g++ -c Archer.cpp

Lord.o: Lord.cpp Lord.hpp
	g++ -c Lord.cpp

Noble.o: Noble.cpp Noble.hpp
	g++ -c Noble.cpp

PersonWithStrengthToFight.o: PersonWithStrengthToFight.cpp PersonWithStrengthToFight.hpp
	g++ -c PersonWithStrengthToFight.cpp

Protector.o: Protector.cpp Protector.hpp
	g++ -c Protector.cpp

Swordsman.o: Swordsman.cpp Swordsman.hpp
	g++ -c Swordsman.cpp

Warrior.o: Warrior.cpp Warrior.hpp
	g++ -c Warrior.cpp

Wizard.o: Wizard.cpp Wizard.hpp
	g++ -c Wizard.cpp

clean:
	rm -f game main.o Archer.o Lord.o Noble.o PersonWithStrengthToFight.o Protector.o Swordsman.o Warrior.o Wizard.o