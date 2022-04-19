#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
	std::string _name;
	unsigned _hit_points;
	unsigned _energy_points;
	unsigned _attack_damage;
	void log(void)const;
public :
	/*canon*/
	ClapTrap(std::string const name);
	ClapTrap(ClapTrap const &src);
	ClapTrap(void);
	ClapTrap &operator=(ClapTrap const &rhs);
	~ClapTrap(void);
	/**/
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif