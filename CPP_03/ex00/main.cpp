//add header

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	Claptrap("Manu");

	Claptrap.attack("Pablo le goat");
	Claptrap.attack("Pablo le goat");
	Claptrap.attack("Pablo le goat");
	Claptrap.attack("Pablo le goat");
	Claptrap.attack("Pablo le goat");
	Claptrap.takeDamage(4);
	Claptrap.beRepaired(5);
	Claptrap.takeDamage(4);
	Claptrap.beRepaired(5);
	Claptrap.takeDamage(4);
	Claptrap.beRepaired(5);
	Claptrap.takeDamage(4);
	Claptrap.beRepaired(5);
	Claptrap.takeDamage(4);
	Claptrap.beRepaired(5);
	Claptrap.attack("Pablo le goat");
	Claptrap.takeDamage(10);
	Claptrap.takeDamage(1);
	Claptrap.beRepaired(1000);
	return (0);
}