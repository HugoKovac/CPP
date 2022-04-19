#include "FragTrap.hpp"

FragTrap::FragTrap(void){
	_name = "FragTrap";
	std::cout << "Void FragTrap Constructor" << std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name){
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "Default FragTrap Constructor" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src){
	*this = src;
	std::cout << "Copy FragTrap Constructor" << std::endl;
}

FragTrap::~FragTrap(void){
	std::cout << "Void FragTrap Destructor" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs){
	if (this != &rhs)
	{
		_hit_points = rhs._hit_points;
		_energy_points = rhs._energy_points;
		_attack_damage = rhs._attack_damage;
	}
	return *this;
}

void FragTrap::attack(std::string const &target){
	if (_energy_points && _hit_points)
	{
		std::cout << "FragTrap " << _name << " attacks " << target << " causing "
			<< _attack_damage << " points of damage!" << std::endl;
		--_energy_points;
	}
	else
		std::cout << _name << " : No such energy or hp" << std::endl;
	log();
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << _name << " : Can I get a high five?" << std::endl;
}