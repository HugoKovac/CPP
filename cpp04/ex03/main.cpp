#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource *create1 = new MateriaSource();
	IMateriaSource *create2 = new MateriaSource();
	ICharacter* p1 = new Character("p1");
	ICharacter* p2 = new Character("p2");
	AMateria* tmp;


	create1->learnMateria(new Ice());
	create2->learnMateria(new Cure());


	tmp = create1->createMateria("ice");
	p1->equip(tmp);
	p1->equip(tmp);
	p1->equip(create2->createMateria("cure"));

	p1->use(0, *p1);
	p1->use(1, *p1);
	p1->use(2, *p1);
	
	p1->unequip(0);
	p1->unequip(1);
	p1->unequip(2);

	p1->use(0, *p1);
	p1->use(1, *p1);
	p1->use(2, *p1);

	p2->equip(create1->createMateria("ice"));
	p2->equip(create2->createMateria("cure"));

	p2->use(0, *p1);
	p2->use(1, *p1);
	
	p2->unequip(0);
	p2->unequip(1);

	p2->use(0, *p1);
	p2->use(1, *p1);

	delete p1;
	delete p2;
	delete create1;
	delete create2;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp2;
	tmp2 = src->createMateria("ice");
	me->equip(tmp2);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	

	return 0;
}