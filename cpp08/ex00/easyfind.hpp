#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iterator>
#include <iostream>

template<typename T>
typename T::iterator easyfind(T const &cont, int const &nb){
	typename T::iterator it;
	for (it = cont.beg(); it != cont.end(); it++)
	{
		std::cout << *it << std::endl;
		std::cout << nb << std::endl;
	}
	return it;
}


#endif