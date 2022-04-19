#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
	std::string _name;
public :
	DiamondTrap(void);
	DiamondTrap(std::string const name);
	DiamondTrap(DiamondTrap const &src);
	DiamondTrap &operator=(DiamondTrap const &rhs);
	~DiamondTrap(void);

	

};

#endif