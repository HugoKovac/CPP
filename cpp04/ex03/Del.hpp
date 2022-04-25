#ifndef DEL_HPP
#define DEL_HPP

#include "AMateria.hpp"

class Del{
public:
	AMateria *_del_Materia;
	Del *_next;
	Del();
	Del(AMateria *newNode);
	Del(Del const &src);
	Del &operator=(Del const &rhs);
	~Del();
};

#endif