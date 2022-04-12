#include "HumanB.hpp"

HumanB::HumanB(std::string str) : _name(str)
{
	this->_Weapon = nullptr;
}

void HumanB::setWeapon(Weapon ptr){
	this->_Weapon = &ptr;
}

void HumanB::attack(void){
	if (!this->_Weapon)
		std::cout << "Can't attack without weapon" << std::endl;
	else
	{
		std::string ptr = this->_Weapon->getType();
		std::cout << this->_name << " attack with their " << ptr << std::endl;
	}
}

