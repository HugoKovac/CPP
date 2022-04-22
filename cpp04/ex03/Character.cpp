#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _nb_materia(0){}

std::string const &Character::getName(void)const{
	return _name;
}

void Character::equip(AMateria* m){
	if (_nb_materia < 4)
		_Materia[_nb_materia++] = m;
}

void Character::unequip(int idx){
	if (_nb_materia > 0)
		_nb_materia--;
}

void Character::use(int idx, ICharacter& target){
	if (_nb_materia > 0)
		_Materia[idx]->use(target);
}
