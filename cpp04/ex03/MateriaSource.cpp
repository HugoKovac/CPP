#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
	_nb_learned = 0;
	for (int i = 0; i < 4; source[i] = nullptr, i++);
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
			std::cout << "Already 4 Materia learned" << std::endl;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type){
	if (type.compare("cure") == 0)
		return new Cure();
	else if (type.compare("ice") == 0)
		return new Ice();
	std::cout << "Types : Cure or Ice" << std::endl;
	return nullptr;
}
