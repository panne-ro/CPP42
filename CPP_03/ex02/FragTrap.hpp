#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public :
	void attack(const std::string &target);
	void highFivesGuys(const std::string &target);

	FragTrap(std::string name);
	~FragTrap();
};

#endif