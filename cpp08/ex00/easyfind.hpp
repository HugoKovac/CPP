#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iterator>
#include <iostream>
#include <algorithm>
#include <exception>

class NotFoundExcep : public std::exception{
	public:
		const char* what() const throw(){
			return ("Argument not found");
		}
};

template<typename T>
typename T::iterator easyfind(T &cont, int const &nb){
	typename T::iterator it;
	it = std::find(cont.begin(), cont.end(), nb);
	if (it == cont.end())
		throw NotFoundExcep();
	return it;
}


#endif