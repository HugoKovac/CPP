#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA{
	std::string	_name;
	Weapon		&_Weapon;
public:
	HumanA(std::string str, Weapon *ptr);
	void attack(void) const;
};

#endif