#include "Character.hpp"

Del *Character::_first = NULL;
bool Character::done = 0;

Character::Character(std::string const &name) : _name(name), _nb_materia(0){
	for (int i = 0; i < 4; _Materia[i] = NULL, i++);
}

Character::~Character(void){
	for (int i = 0; i < 4; i++)
		if (_Materia[i])
			delete _Materia[i];
	if (Character::done == 0)
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
	if (idx >= 0 && idx < 4 && _Materia[idx])
	{
		newNode(_Materia[idx]);
		_Materia[idx] = NULL;
		_nb_materia--;
	}
}

void Character::use(int idx, ICharacter& target){
	if (idx >= 0 && idx < 4 && _Materia[idx])
		_Materia[idx]->use(target);
}

void Character::newNode(AMateria *data){
	Del *newNode = new Del(data);

	if (_first == NULL)
	{
		_first = newNode;
	}
	else
	{
		Del *tmp = _first;
		while (tmp->_next)
			tmp = tmp->_next;
		tmp->_next = newNode;
	}
}

void Character::del(){
	Del *tmp = _first;
	Del *tmp2;
	Del *tmp3;

	Character::done = 1;
	if (_first)
	{
		while (tmp->_next != NULL)
		{
			tmp2 = tmp;
			tmp3 = tmp;
			tmp = tmp->_next;
			while (1)
			{
				if (tmp3 == tmp2)
				{
					delete tmp2;
					break;
				}
				else if (tmp3->_next == NULL)
				{
					delete tmp2->_del_Materia;
					delete tmp2;
					break;
				}
				tmp3 = tmp3->_next;
			}
		}
	}
}

