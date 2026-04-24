//add header

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	Scav("Manu");

	Scav.attack("Pablo le goat");
	Scav.attack("Pablo le goat");
	Scav.attack("Pablo le goat");
	Scav.guardGate();
	Scav.takeDamage(10);
	Scav.beRepaired(10);
	Scav.takeDamage(10);
	Scav.beRepaired(10);
	Scav.attack("Pablo le goat");
	Scav.takeDamage(100);
	Scav.beRepaired(10);
	return 0;
}