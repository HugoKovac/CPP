#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"){
    std::cout << "Default Dog Constructor" << std::endl;
    _brain = new Brain();
}

Dog::Dog(Dog const &src){
    std::cout << "Copy Dog Constructor" << std::endl;
    *this = src;
}

Dog &Dog::operator=(Dog const &rhs){
    if (&rhs != this)
        _type = rhs._type;
    return *this;
}

Dog::~Dog(void){
    std::cout << "Default Dog Destructor" << std::endl;
    delete _brain;
}

void Dog::makeSound(void)const{
        std::cout << _type << " : Wouf!" << std::endl;
}
