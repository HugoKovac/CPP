#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB{
	std::string	_name;
	Weapon		*_Weapon;
public:
	HumanB(std::string str);
	void	setWeapon(Weapon ptr);
	void	attack(void);
};

#endif