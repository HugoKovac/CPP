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
	Del *temp;
	Del *tmp2;

	Character::done = 1;
	if (_first)
	{
		while (tmp->_next != NULL)
		{
			temp = tmp;
			tmp2 = tmp->_next;
			tmp = tmp->_next;
			while (tmp2 != NULL)
			{
				if (temp == tmp2)
					break;
				tmp2 = tmp2->_next;
			}
			if (tmp2 == NULL)
				delete temp->_del_Materia;
			delete tmp2;
		}
		/*
		while (tmp->_next != NULL)
		{
			std::cout << "test" << std::endl;
			tmp2 = tmp;
			tmp = tmp->_next;
			delete tmp2;
		}
		delete tmp->_next;
		*/
	}
}

