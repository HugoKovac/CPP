#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "Character.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria *src) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif