#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <stdlib.h>
#include <iostream>

template <typename T>
class Array{
	T *_data;
	unsigned int _size;
public:
	Array() : _data(NULL), _size(0){}
	Array(unsigned int const &n) : _size(n){
		_data = new T[n];
	}
	~Array(){delete [] _data;}
	class OutOfMemory : public std::exception{
		const char* what() const throw(){
			return ("Out of memory!");
		}
	};
	T &operator[](unsigned int n){
		if (n >= _size)
			throw OutOfMemory();
		return this->_data[n];
	}
	unsigned int size(void){return _size;}
};

#endif