#include "Del.hpp"

Del::Del() : _del_Materia(nullptr), _next(nullptr){
}

Del::Del(AMateria *newNode) : _del_Materia(newNode), _next(nullptr){
}

Del::Del(Del const &src){
	*this = src;
}

Del &Del::operator=(Del const &rhs){
	_del_Materia = rhs._del_Materia;
	return *this;
}
