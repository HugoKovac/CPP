#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
public :
	Cure(void) : AMateria("Cure"){}
	AMateria *clone(void)const;
};

#endif