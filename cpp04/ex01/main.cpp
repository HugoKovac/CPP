#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include <iostream>

#define SIZE 4

int main()
{

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



    std::cout <<std::endl<<"========================" <<std::endl<<std::endl;
    for (int i = 0; i < SIZE; i++)
        delete arr[i];
    std::cout <<std::endl<<"========================" <<std::endl<<std::endl;

    return 0;
}