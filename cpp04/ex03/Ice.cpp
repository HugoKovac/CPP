#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice(Ice const &src) : AMateria(src.type){
}

Ice &Ice::operator=(Ice const &rhs){
	type = rhs.type;
	return *this;
}

AMateria *Ice::clone(void)const{
	std::cout << " etst" << std::endl;
	return new Ice();
}

void Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

