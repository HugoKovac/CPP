#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
public :
	Cure(void) : AMateria("Cure"){}
	Cure(Cure const &src);
	Cure &operator=(Cure const &rhs);
	~Cure(void){};
	AMateria *clone(void)const;
};

#endif