#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat"){
    std::cout << "Default WrongCat Constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src){
    std::cout << "Copy WrongCat Constructor" << std::endl;
    *this = src;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs){
    if (&rhs != this)
        _type = rhs._type;
    return *this;
}

WrongCat::~WrongCat(void){
    std::cout << "Default WrongCat Destructor" << std::endl;
}

void WrongCat::makeSound(void)const{
        std::cout << _type << " : Miaou!" << std::endl;
}
