#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public A_Animal{
    Brain *_brain;
public:
    Cat(void);
    Cat(Cat const &src);
    Cat &operator=(Cat const &rhs);
    ~Cat(void);

    virtual void makeSound(void)const;
};

#endif