#include "Brain.hpp"

Brain::Brain(void){
    std::cout << "Default Brain Constructor" << std::endl;
}

Brain::Brain(Brain const &src){
    *this = src;
}
Brain &Brain::operator=(Brain const &src){
    if (this != &src)
        for (int i = 0; i < 100; i++)
            _ideas[i] = src._ideas[i];
    return *this;
}

Brain::~Brain(void){
    std::cout << "Default Brain Destructor" << std::endl;
}