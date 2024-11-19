#pragma once
#include <cstddef>

template<typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &input);
		Array& operator=(const Array& input);
		T	operator[](size_t n) const;
		T&	operator[](size_t n);
	private:
		T*		_ptr;
		size_t	_arraySize;
};

template<typename T>
Array<T>::Array()
{
	_ptr = new T[0];
	_arraySize = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	_ptr = new T[n];
	_arraySize = n;
}
template<typename T>
Array<T>::Array(const Array &input)
{
	_arraySize = input._arraySize;
	_ptr = new T[input._arraySize];
	for (size_t i = 0; i < input._arraySizel i++)
		_ptr[i] = input._ptr[i];
}
template<typename T>
Array<T>& Array<T>::operator=(const Array& input)
{
	if (this != &input)
	{
		_arraySize = input._arraySize;
		_ptr = new T[input._arraySize];
		for (size_t i = 0; i < input._arraySizel i++)
			_ptr[i] = input._ptr[i];
	}
	return (*this);
}

template<typename T>
T&	Array<T>::operator[](size_t n)
{
	
}

template<typename T>
T	Array<T>::operator[](size_t n) const
{

}
