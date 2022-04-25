#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Del.hpp"

class Character : public ICharacter{
	std::string _name;
	AMateria *_Materia[4];
	int _nb_materia;
	static Del *_first;
	static bool done;
public:
	Character(void){}
	Character(std::string const &name);
	~Character(void);

	std::string const & getName(void) const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	void newNode(AMateria *data);
	void del();
};

#endif