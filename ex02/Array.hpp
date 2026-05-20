#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <stdexcept>

template <typename T>
class Array
{
public:
	Array();
	Array(unsigned int n);
	Array(Array const &other);
	~Array();
	Array &operator=(Array const &other);

	T       &operator[](unsigned int index);
	T const &operator[](unsigned int index) const;

	unsigned int size() const;

private:
	T            *_data;
	unsigned int  _size;
};

#include "Array.tpp"

#endif
