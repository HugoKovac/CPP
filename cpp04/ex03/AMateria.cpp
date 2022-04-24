#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const &type) : type(type){
}

std::string const &AMateria::getType(void)const{
	return type;
}

void AMateria::use(ICharacter &target){
	std::cout << "\"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
}