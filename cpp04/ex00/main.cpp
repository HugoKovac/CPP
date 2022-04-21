#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
    std::cout <<std::endl<<"========================" <<std::endl<<std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;
    std::cout << "========================" <<std::endl<<std::endl;

    std::cout << meta->getType() << " <=" << std::endl;
    std::cout << j->getType() << " <=" << std::endl;
    std::cout << i->getType() << " <=" << std::endl << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout <<std::endl<<"========================" <<std::endl<<std::endl;
    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* i2 = new WrongCat();
    std::cout << std::endl;
    std::cout << "========================" <<std::endl<<std::endl;

    std::cout << meta2->getType() << " <=" << std::endl;
    std::cout << i2->getType() << " <=" << std::endl << std::endl;

    i2->makeSound();
    meta2->makeSound();

    delete meta2;
    delete i2;

    return 0;
}