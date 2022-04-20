#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class Weapon{
	std::string _type;
public:
	Weapon(std::string str);
	std::string const &getType(void);
	void setType(std::string str);
};

#endif