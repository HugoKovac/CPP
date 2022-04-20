#include "Weapon.hpp"

Weapon::Weapon(std::string str) : _type(str){}

std::string const &Weapon::getType(void){
	std::string &ref = this->_type;
	return ref;
}

void Weapon::setType(std::string str){
	this->_type = str;
}
