#include "Animal.hpp"

Animal::Animal(void) : _type("None"){
    std::cout << "Void Animal Constructor" << std::endl;
}

Animal::Animal(std::string const type) : _type(type){
    std::cout << "Default Animal Constructor" << std::endl;

}

Animal::Animal(Animal const &src){
    std::cout << "Copy Animal Destructor" << std::endl;
    *this = src;
}

Animal &Animal::operator=(Animal const &rhs){
    if (&rhs != this)
        _type = rhs._type;
    return *this;
}

Animal::~Animal(void){
    std::cout << "Default Animal Destructor" << std::endl;
}

/**/
void Animal::makeSound(void)const{
    if (_type.compare("Cat") == 0)
        std::cout << "Miaou!" << std::endl;
    else
        std::cout << "Wouf!" << std::endl;
}

std::string Animal::getType(void) const{
    return _type;
}