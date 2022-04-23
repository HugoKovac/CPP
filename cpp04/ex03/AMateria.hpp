#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter;
// std::string const &ICharacter::getName(void) const;

class AMateria
{
protected:
	std::string type;
public:
	AMateria(std::string const & type);
	virtual ~AMateria(void){}

	std::string const & getType(void) const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif