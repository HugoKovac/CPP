#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
	int _nb_learned;
	AMateria *source[4];//Error quand create alors que deja 4 materia
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const &src);
	MateriaSource &operator=(MateriaSource const &rhs);
	~MateriaSource(void);

	void learnMateria(AMateria* src);
	AMateria* createMateria(std::string const & type);
};

#endif