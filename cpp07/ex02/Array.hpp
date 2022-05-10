#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array{
	T *_data;
	unsigned int _size;
public:
	Array() : _data(NULL), _size(0){}
	Array(unsigned int const &n) : _size(n){//!if n not valid
		_data = new T[n];
		for (unsigned int i = 0; i < n; i++)
			_data[i] = 0;
	}
	class OutOfMemory : public std::exception{
		virtual const char* what() const throw(){
			return "Out of memory!";
		}
	};
	T operator[](unsigned int n){
		if (n >= _size)
			throw OutOfMemory();
		return this->_data[n];
	}
	unsigned int size(void){return _size;}

};

#endif