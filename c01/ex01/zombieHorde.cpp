#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie *tab = new Zombie[N];
	for (int i = 1; i <= N; i++)
	{
		tab[i].setName(name);
		std::cout << std::to_string(i) << " : ";
		tab[i].announce();
	}
	return (tab);
}