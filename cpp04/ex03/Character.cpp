#include "Character.hpp"

Del *Character::_first = nullptr;

Character::Character(std::string const &name) : _name(name), _nb_materia(0){}

Character::~Character(void){
	for (int i = 0; i < 4; i++)
		if (_Materia[i])
			delete _Materia[i];
	del();
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

void Character::newNode(AMateria *data){
	Del *newNode = new Del(data);

	if (_first == nullptr)
		_first = newNode;
	else
	{
		Del *tmp = _first;
		while (tmp->_next)
			tmp = tmp->_next;
		tmp->_next = newNode;
	}
}

void Character::del(){
	while (_first->_next != nullptr)
		if (_first->_del_Materia)
		{
			delete _first->_del_Materia;
			_first->_del_Materia = nullptr;
		}
}

