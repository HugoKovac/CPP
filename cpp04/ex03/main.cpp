#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource *create1 = new MateriaSource();
	IMateriaSource *create2 = new MateriaSource();
	ICharacter* p1 = new Character("p1");
	AMateria* tmp;

	create1->learnMateria(new Ice());
	create1->learnMateria(new Ice());
	create1->learnMateria(new Ice());
	create1->learnMateria(new Ice());
	create1->learnMateria(new Ice());
	create2->learnMateria(new Cure());
	tmp = create1->createMateria("ice");
	p1->equip(tmp);
	tmp = create2->createMateria("cure");
	p1->equip(tmp);
	tmp = create2->createMateria("cure");
	p1->equip(tmp);
	tmp = create2->createMateria("cure");
	p1->equip(tmp);
	tmp = create2->createMateria("cure");
	p1->equip(tmp);
	p1->unequip(0);
	p1->unequip(1);
	p1->unequip(2);
	p1->unequip(3);
	p1->unequip(3);
	p1->unequip(4);
	p1->use(0, *p1);
	p1->use(1, *p1);
	p1->use(2, *p1);
	p1->use(3, *p1);
	p1->use(4, *p1);

	delete p1;
	delete create1;
	delete create2;

	

	// IMateriaSource* src = new MateriaSource();//MateriaSource
	// src->learnMateria(new Ice());//Materia source garde en memoire in Ice
	// src->learnMateria(new Cure());//Materia source garde en memoire in Cure

	// ICharacter* me = new Character("me");//Create a Character

	// AMateria* tmp;
	// tmp = src->createMateria("ice");//Creer un materia ice
	// me->equip(tmp);//implemante le Materia dans me
	// tmp = src->createMateria("cure");//Creer un Cure sur Ice donc tout Matreria create doivent etre garder dans MateriaSource
	// me->equip(tmp);//implemante le Materia dans me

	// ICharacter* bob = new Character("bob");//Create a new Character

	// me->use(0, *bob);//me attack bob avec Materia no 0
	// me->use(1, *bob);//me attack bob avec Materia no 0

	// delete bob;
	// delete me;
	// delete src;
	

	return 0;
}