#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();//MateriaSource
	src->learnMateria(new Ice());//Materia source garde en memoire in Ice
	src->learnMateria(new Cure());//Materia source garde en memoire in Cure

	ICharacter* me = new Character("me");//Create a Character

	AMateria* tmp;
	tmp = src->createMateria("ice");//Creer un materia ice
	me->equip(tmp);//implemante le Materia dans me
	tmp = src->createMateria("cure");//Creer un Cure sur Ice donc tout Matreria create doivent etre garder dans MateriaSource
	me->equip(tmp);//implemante le Materia dans me

	ICharacter* bob = new Character("bob");//Create a new Character

	me->use(0, *bob);//me attack bob avec Materia no 0
	me->use(1, *bob);//me attack bob avec Materia no 0

	delete bob;
	delete me;
	delete src;

	return 0;
}