#include "Zombie.hpp"

int main(void)
{
	randomChump("Patrick");
	Zombie	*JeanMichel = newZombie("Jean Michel");
	JeanMichel->announce();
	delete JeanMichel;
	return 0;
}