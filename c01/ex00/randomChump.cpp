#include "Zombie.hpp"

void	randomChump(std::string name){
	Zombie Instance(name);
	Instance.announce();
}