#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>


class Zombie
{
	std::string _name;
public:
	~Zombie(void);
	void	setName(std::string name);
	void	announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif