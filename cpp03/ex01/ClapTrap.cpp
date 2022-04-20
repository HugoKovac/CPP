#include "ClapTrap.hpp"

/*canon*/
ClapTrap::ClapTrap(std::string const name) : _name(name){
	std::cout << "Default ClapTrap constructor" << std::endl;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &src){
	std::cout << "Copy ClapTrap constructor" << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(void) : _name("ClapTrap"){
	std::cout << "Void ClapTrap constructor" << std::endl;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs){
	if (&rhs != this)
	{
		_name = rhs._name;
		_hit_points = rhs._hit_points;
		_energy_points = rhs._energy_points;
		_attack_damage = rhs._attack_damage;
	}
	return *this;
}

ClapTrap::~ClapTrap(void){
	std::cout << "Default ClapTrap destructor" << std::endl;
}

/**/
void ClapTrap::attack(const std::string &target){
	if (_energy_points && _hit_points)
	{
		std::cout << _name << " attacks " << target << " causing "
			<< _attack_damage << " points of damage!" << std::endl;
		--_energy_points;
	}
	else
		std::cout << _name << " : No such energy or hp" << std::endl;
	log();
}

void ClapTrap::takeDamage(unsigned int amount){
	if (_energy_points && _hit_points)
	{
		std::cout << _name << " has been attacked he take "
			<< amount << " of damage!" << std::endl;
		if (amount > _hit_points)
			_hit_points = 0;
		else
			_hit_points -= amount;
	}
	else
		std::cout << _name << " : No such energy or hp" << std::endl;
	log();
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_energy_points && _hit_points)
	{
		std::cout << _name << " has been repared he gain " << amount << " hp!" << std::endl;
		--_energy_points;
		_hit_points += amount;
	}
	else
		std::cout << _name << " : No such energy or hp" << std::endl;
	log();
}

void ClapTrap::log(void)const{
	std::cout << _name << " :" << std::endl;
	std::cout << "\t- " << _hit_points << " hp" << std::endl;
	std::cout << "\t- " << _energy_points << " energy points" << std::endl;
	std::cout << "\t- " << _attack_damage << " attack damage" << std::endl;
}
