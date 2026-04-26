//add header

#include "FragTrap.hpp"

int main()
{
	FragTrap	Frag("Manu");

	Frag.attack("Pablo le goat");
	Frag.attack("Pablo le goat");
	Frag.attack("Pablo le goat");
	Frag.highFivesGuys("Nico");
	Frag.takeDamage(10);
	Frag.beRepaired(10);
	Frag.takeDamage(10);
	Frag.beRepaired(10);
	Frag.attack("Pablo le goat");
	Frag.takeDamage(100);
	Frag.beRepaired(10);
	return 0;
}