#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include <iostream>

#define SIZE 100

int main()
{

    std::cout << std::endl<<"========================" << std::endl << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;
    std::cout << "========================" <<std::endl<<std::endl;
    
    j->makeSound();
    i->makeSound();

    std::cout << std::endl<<"========================" << std::endl << std::endl;
    delete j;
    delete i;
    std::cout << std::endl;
    std::cout << "========================" <<std::endl<<std::endl;

    if (SIZE < 1 || SIZE % 2)
    {
        std::cout << "Error with size of Animal array!" << std::endl;
        return 1;
    }

    std::cout << std::endl<<"========================" << std::endl << std::endl;
    Animal *arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        if (i < SIZE / 2)
            arr[i] = new Dog();
        else
            arr[i] = new Cat();
    }
    std::cout << std::endl;
    std::cout << "========================" <<std::endl<<std::endl;
    
    for (int i = 0; i < SIZE; i++)
        arr[i]->makeSound();

    std::cout <<std::endl<<"========================" <<std::endl<<std::endl;
    for (int i = 0; i < SIZE; i++)
        delete arr[i];
    std::cout <<std::endl<<"========================" <<std::endl<<std::endl;

    return 0;
}