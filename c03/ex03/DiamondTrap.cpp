#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("DiamondTrap_clap_name"), ScavTrap("DiamondTrap_clap_name"), FragTrap("DiamondTrap_clap_name"), _name("DiamondTrap"){
	std::cout << "Void DiamondTrap Constructor" << std::endl;
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), _name(name){
	std::cout << "Default DiamondTrap Constructor" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &ref){
	std::cout << "Copy DiamondTrap Constructor" << std::endl;
	*this = ref;
}

DiamondTrap::~DiamondTrap(void){
	std::cout << "Default DiamondTrap Destructor" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs){
	if (&rhs != this)
	{
		_hit_points = rhs._hit_points;
		_energy_points = rhs._energy_points;
		_attack_damage = rhs._attack_damage;
	}
	return *this;
}
/**/

void DiamondTrap::attack(std::string const str){
	ScavTrap::attack(str);
}

void DiamondTrap::whoAmI(void){
	std::cout << "DiamondTrap name : " << _name << std::endl;
	std::cout << "Sub-object DiamondTrap name : " << ClapTrap::_name << std::endl;
}
