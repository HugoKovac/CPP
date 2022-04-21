#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal{
protected:
    std::string _type;
public:
    Animal(void);
    Animal(std::string const type);
    Animal(Animal const &src);
    Animal &operator=(Animal const &rhs);
    virtual ~Animal(void);

    virtual void makeSound(void)const;
    std::string getType(void)const;
};

#endif