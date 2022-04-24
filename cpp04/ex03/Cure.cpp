#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure(Cure const &src) : AMateria(src.type){
}

Cure &Cure::operator=(Cure const &rhs){
	type = rhs.type;
	return *this;
}

AMateria *Cure::clone(void)const{
	return new Cure();
}

void Cure::use(ICharacter &target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
