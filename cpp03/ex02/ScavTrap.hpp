#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public :
	ScavTrap(std::string const name);
	ScavTrap(ScavTrap const &src);
	ScavTrap(void);
	~ScavTrap(void);
	ScavTrap &operator=(ScavTrap const &rhs);

	void guardGate(void);
	void attack(std::string const &target);
};

#endif