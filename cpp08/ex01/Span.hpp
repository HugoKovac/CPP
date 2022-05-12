#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
#include <stdexcept>
#include <algorithm>
#include <limits>

class Span{
	unsigned int _maxSize;
	unsigned int _currentSize;
	std::vector<int> _data;
public:
	Span(unsigned int const n);
	Span(Span & src);
	Span &operator=(Span & rhs);
	void addNumber(int const n);
	int longestSpan();
	int shortestSpan();
	template <typename T>
	void insertNumber(T &toInsert){
		if (_data.size() + toInsert.size() > _maxSize)
			throw std::length_error("insertNumber");
		_data.insert(_data.end(), toInsert.begin(), toInsert.end());
	}
	void printAll();
	~Span(){}
};

#endif