#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter{
	std::string _name;
	AMateria *_Materia[4];
	int _nb_materia;
public:
	Character(void){}
	Character(std::string const &name);
	~Character(void);

	std::string const & getName(void) const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif