#include "Brain.hpp"

Brain::Brain(void){
    std::cout << "Default Brain Constructor" << std::endl;
}

Brain::Brain(Brain const &src){
    *this = src;
}
Brain &Brain::operator=(Brain const &src){
    if (this != &src)
        _ideas = src._ideas;
    return *this;
}

Brain::~Brain(void){
    std::cout << "Default Brain Destructor" << std::endl;
}