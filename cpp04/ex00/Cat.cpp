#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"){
    std::cout << "Default Cat Constructor" << std::endl;
}

Cat::Cat(Cat const &src){
    std::cout << "Copy Cat Constructor" << std::endl;
    *this = src;
}

Cat &Cat::operator=(Cat const &rhs){
    if (&rhs != this)
        _type = rhs._type;
    return *this;
}

Cat::~Cat(void){
    std::cout << "Default Cat Destructor" << std::endl;
}

