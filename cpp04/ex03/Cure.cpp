#include "Cure.hpp"

Cure::Cure(Cure const &src) : AMateria(src.type){
}

Cure &Cure::operator=(Cure const &rhs){
	type = rhs.type;
	return *this;
}

AMateria *Cure::clone(void)const{
	return new Cure();
}