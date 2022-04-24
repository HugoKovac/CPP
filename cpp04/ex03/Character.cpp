#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _nb_materia(0){}

Character::~Character(void){
	for (int i = 0; i < 4; i++)
		if (_Materia[i])
			delete _Materia[i];
}

void Character::equip(AMateria* m){
	if (m)
	{
		if (_nb_materia < 4)
			for (int i = 0; i < 4; i++)
				if (!_Materia[i])
				{
					_Materia[_nb_materia++] = m;
					break;
				}
	}
}

std::string const &Character::getName(void) const{
	return _name;
}

void Character::unequip(int idx){
	if (_nb_materia > 0 && idx < _nb_materia && idx >= 0 && idx < 4)
	{
		_Materia[idx] = nullptr;
		_nb_materia--;
	}
}

void Character::use(int idx, ICharacter& target){
	if (_nb_materia > 0 && idx < _nb_materia && idx >= 0 && idx < 4)
		_Materia[idx]->use(target);
}
