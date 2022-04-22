#include "Animal.hpp"

A_Animal::A_Animal(void) : _type("None"){
    std::cout << "Void A_Animal Constructor" << std::endl;
}

A_Animal::A_Animal(std::string const type) : _type(type){
    std::cout << "Default A_Animal Constructor" << std::endl;

}

A_Animal::A_Animal(A_Animal const &src){
    std::cout << "Copy A_Animal Destructor" << std::endl;
    *this = src;
}

A_Animal &A_Animal::operator=(A_Animal const &rhs){
    if (&rhs != this)
        _type = rhs._type;
    return *this;
}

A_Animal::~A_Animal(void){
    std::cout << "Default A_Animal Destructor" << std::endl;
}

/**/
void A_Animal::makeSound(void)const{
        std::cout << _type << " : make sound!" << std::endl;
}

std::string A_Animal::getType(void) const{
    return _type;
}