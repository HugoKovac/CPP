#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
#include <stdexcept>
#include <algorithm>

class Span{
	unsigned int const _maxSize;
	unsigned int _currentSize;
	std::vector<int> _data;
public://! Faire forme canonique
	Span(unsigned int const n);
	void addNumber(int const n);
	unsigned int longestSpan();
	template <typename T>
	void insertNumber(T &toInsert){
		if (_data.size() + toInsert.size() > _maxSize)
			throw std::length_error("insertNumber");
		_data.insert(_data.end(), toInsert.begin(), toInsert.end());
	}
	void printAll();
};

#endif