#include "Ice.hpp"

Ice::Ice(Ice const &src) : AMateria(src.type){
}

Ice &Ice::operator=(Ice const &rhs){
	type = rhs.type;
	return *this;
}

AMateria *Ice::clone(void)const{
	return new Ice();
}

