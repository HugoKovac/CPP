#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
public :
	Ice(void) : AMateria("Ice"){}
	AMateria *clone(void)const;
};

#endif