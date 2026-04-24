//add header

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	ClapTrap("Manu");

	ClapTrap.attack("Pablo le goat");
	ClapTrap.attack("Pablo le goat");
	ClapTrap.attack("Pablo le goat");
	ClapTrap.attack("Pablo le goat");
	ClapTrap.attack("Pablo le goat");
	ClapTrap.takeDamage(4);
	ClapTrap.beRepaired(5);
	ClapTrap.takeDamage(4);
	ClapTrap.beRepaired(5);
	ClapTrap.takeDamage(4);
	ClapTrap.beRepaired(5);
	ClapTrap.takeDamage(4);
	ClapTrap.beRepaired(5);
	ClapTrap.takeDamage(4);
	ClapTrap.beRepaired(5);
	ClapTrap.attack("Pablo le goat");
	ClapTrap.takeDamage(10);
	ClapTrap.takeDamage(1);
	ClapTrap.beRepaired(1000);
	return (0);
}