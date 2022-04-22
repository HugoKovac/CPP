#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <iostream>

class Brain{
    std::string _ideas[100];
public:
    Brain(void);
    Brain(Brain const &src);
    Brain &operator=(Brain const &src);
    ~Brain(void);
};

#endif