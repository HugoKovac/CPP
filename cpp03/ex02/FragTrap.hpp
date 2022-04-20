#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public :
	FragTrap(void);
	FragTrap(std::string const name);
	FragTrap(FragTrap const &src);
	~FragTrap(void);
	FragTrap &operator=(FragTrap const &rhs);
	
	void attack(std::string const &target);
	void highFivesGuys(void);
} ;

#endif