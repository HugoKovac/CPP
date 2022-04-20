#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon *ptr) : _name(str), _Weapon(*ptr){
}

void HumanA::attack(void) const{
	std::cout << this->_name << " attack with their " << this->_Weapon.getType() << std::endl;
}
