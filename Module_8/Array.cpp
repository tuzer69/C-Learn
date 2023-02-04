#pragma once
#include "Array.h"

template <typename T>
Array<T>::Array() : _length(0), _data(nullptr)
{}

template <typename T>
Array<T>::Array(int size) : _length(size)
{
	if (size <= 0)
	{
		throw std::exception("Error: lenght is null or negative value.");
	}

	else if (size > 10'000)
	{
		throw std::exception("Error: lenght is very big (max lenght = 10 000).");
	}

	else
	{
		_data = new T[size]{};
	}
};

template <class T>
void Array<T>::reallocate(int newLength)
{
	if (newLength <= 0) return;

	_data = new T[newLength];
	_length = newLength;
}

template <class T>
Array<T>::Array(const Array& a)
{
	reallocate(a.getLength());

	for (int index = 0; index < _length; ++index)
		_data[index] = a._data[index];
}

template <class T>
int Array<T>::getLength() const
{
	return _length;
}

template <class T>
Array<T>& Array<T>::operator=(const Array& a)
{
	if (&a == this) return *this;

	reallocate(a.getLength());

	for (int index{ 0 }; index < _length; ++index)
		_data[index] = a._data[index];

	return *this;
}

template <class T>
void Array<T>::erase()
{
	delete[] _data;
	_data = nullptr;
	_length = 0;
}

template <class T>
T& Array<T>::operator[](int index)
{
	if (index >= 0 && index < _length)
	{
		return _data[index];
	}
	else
	{
		throw std::exception("Error: out of range array size.");
	}
}

template <typename T>
void Array<T>::remove(int index)
{
	if (index <= 0 && index >= _length)
	{
		throw std::exception("Error: bad array index.");
	}

	if (_length == 1)
	{
		erase();
		return;
	}

	int* data = new T[_length - 1];

	for (int before = 0; before < index; ++before)
		data[before] = _data[before];

	for (int after = index + 1; after < _length; ++after)
		data[after - 1] = _data[after];

	delete[] _data;
	_data = data;
	--_length;
}

template <typename T>
void Array<T>::insert(int value, int index)
{
	if (index <= 0 && index >= _length)
	{
		throw std::exception("Error: bad array index.");
	}

	int* data = new T[_length + 1];

	for (int before = 0; before < index; ++before)
		data[before] = _data[before];

	data[index] = value;

	for (int after = index; after < _length; ++after)
		data[after + 1] = _data[after];

	delete[] _data;
	_data = data;
	++_length;
}

template <typename T>
void Array<T>::resize(int newLength)
{
	if (newLength == _length) return;

	if (newLength <= 0)
	{
		this->erase();
		return;
	}

	int* data = new T[newLength];

	if (_length > 0)
	{
		int elementsToCopy{ (newLength > _length) ? _length : newLength };

		for (int index = 0; index < elementsToCopy; ++index)
			data[index] = _data[index];
	}

	delete[] _data;

	_data = data;
	_length = newLength;
}

template <typename T>
void Array<T>::insertAtBeginning(int value)
{
	insert(value, 0);
}

template <typename T>
void Array<T>::insertAtEnd(int value)
{
	insert(value, _length);
}



//LINKING
template class Array<int>;
