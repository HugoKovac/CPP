#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _nb_materia(0){}

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
	if (_nb_materia > 0 && _nb_materia < 5)
	{
		_Materia[idx] = nullptr;//Save before
		_nb_materia--;
	}
}

void Character::use(int idx, ICharacter& target){
	if (_nb_materia > 0)
		_Materia[idx]->use(target);
}
