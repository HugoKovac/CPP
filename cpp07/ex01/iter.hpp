#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void print_stuff(T const stuff){
	std::cout << stuff << std::endl;
}

template <typename T>
void iter(T const *tab, int tab_size, void (*ptrFunc)(T const &stuff)){
	while (--tab_size >= 0)
		ptrFunc(tab[tab_size]);
}

#endif