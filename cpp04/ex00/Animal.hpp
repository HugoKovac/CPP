#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal{
protected:
    std::string _type;
public:
    Animal(void);
    Animal(std::string const type);
    Animal(Animal const &src);
    Animal &operator=(Animal const &rhs);
    ~Animal(void);

    virtual void makeSound(void)const;
    std::string getType(void)const;
};

#endif