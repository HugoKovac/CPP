#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
	_nb_learned = 0;
	for (int i = 0; i < 4; source[i] = NULL, i++);
}

MateriaSource::MateriaSource(MateriaSource const &src){
	for (int i = 0; i < 4; i++)
		source[i] = src.source[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs){
	for (int i = 0; i < 4; i++)
		source[i] = rhs.source[i];
	return *this;
}

MateriaSource::~MateriaSource(void){
	for (int i = 0; i < 4; i++)
		if (source[i])
			delete source[i];
}

void MateriaSource::learnMateria(AMateria* src){
	if (src)
	{
		if (_nb_learned < 4)
			source[_nb_learned++] = src;
		else
		{
			delete src;
			std::cout << "Already 4 Materia learned" << std::endl;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type){
	if (_nb_learned < 4)
	{
		for (int i = 0; i < 4; i++)
			if (source[i] && type.compare(source[i]->getType()) == 0)
				return (source[i]->clone());
	}
	return NULL;
}
