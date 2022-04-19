#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name){
	std::cout << "Default ScavTrap constructor" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src){
	std::cout << "Copy ClapTrap constructor" << std::endl;
	*this = src;
}

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap"){
	std::cout << "Void ScavTrap constructor" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs){
	if (&rhs != this)
	{
		_hit_points = rhs._hit_points;
		_energy_points = rhs._energy_points;
		_attack_damage = rhs._attack_damage;
	}
	return *this;
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap destructor" << std::endl;
}

/**/
void ScavTrap::attack(std::string const &target){
	if (_energy_points && _hit_points)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing "
			<< _attack_damage << " points of damage!" << std::endl;
		--_energy_points;
	}
	else
		std::cout << _name << " : No such energy or hp" << std::endl;
	log();
}

void ScavTrap::guardGate(void){
	std::cout << _name << " : ScavTrap came into Gatekeeper mode" << std::endl;
}

