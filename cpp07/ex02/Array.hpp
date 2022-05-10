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
	Array(Array const &src) : _size(src._size){
		_data = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_data[i] = src._data[i];
	}
	~Array(){delete [] _data;}
	Array &operator=(Array const &rhs){
		_size = rhs._size;
		_data = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_data[i] = rhs._data[i];
		return *this;
	}
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