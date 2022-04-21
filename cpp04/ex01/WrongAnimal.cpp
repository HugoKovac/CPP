#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("None"){
    std::cout << "Void WrongAnimal Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const type) : _type(type){
    std::cout << "Default WrongAnimal Constructor" << std::endl;

}

WrongAnimal::WrongAnimal(WrongAnimal const &src){
    std::cout << "Copy WrongAnimal Destructor" << std::endl;
    *this = src;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs){
    if (&rhs != this)
        _type = rhs._type;
    return *this;
}

WrongAnimal::~WrongAnimal(void){
    std::cout << "Default WrongAnimal Destructor" << std::endl;
}

/**/
void WrongAnimal::makeSound(void)const{
        std::cout << _type << " : make sound!" << std::endl;
}

std::string WrongAnimal::getType(void) const{
    return _type;
}