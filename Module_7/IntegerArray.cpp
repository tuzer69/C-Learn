#include "IntegerArray.h"
#include <exception>

IntegerArray::IntegerArray(int length) : _length(length)
{
	if (length <= 0)
	{
		throw std::exception("Error: lenght is null or negative value.");
	}

	else if (length > 10'000)
	{
		throw std::exception("Error: lenght is very big (max lenght = 10 000).");
	}

	else
	{
		_data = new int[length]{};
	}
}

IntegerArray::IntegerArray(const IntegerArray& a)
{
	reallocate(a.getLength());

	for (int index = 0; index < _length; ++index)
		_data[index] = a._data[index];
}

IntegerArray& IntegerArray::operator=(const IntegerArray& a)
{
	if (&a == this) return *this;

	reallocate(a.getLength());

	for (int index{ 0 }; index < _length; ++index)
		_data[index] = a._data[index];

	return *this;
}

IntegerArray::~IntegerArray()
{
	delete[] _data;
}

void IntegerArray::erase()
{
	delete[] _data;
	_data = nullptr;
	_length = 0;
}

int& IntegerArray::operator[](int index)
{
	if (index >= 0 && index < _length)
	{
		return IntegerArray::_data[index];
	}
	else
	{
		throw std::exception("Error: out of range array size.");
	}
	
}

int IntegerArray::getLength() const
{
	return _length;
}

void IntegerArray::reallocate(int newLength)
{
	if (newLength <= 0) return;

	_data = new int[newLength];
	_length = newLength;
}

void IntegerArray::resize(int newLength)
{
	if (newLength == _length) return;

	if (newLength <= 0)
	{
		this->erase();
		return;
	}

	int* data = new int[newLength];

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

void IntegerArray::insert(int value, int index)
{
	if (index <= 0 && index >= _length)
	{
		throw std::exception("Error: bad array index.");
	}

	int* data = new int[_length + 1];

	for (int before = 0; before < index; ++before)
		data[before] = _data[before];

	data[index] = value;

	for (int after = index; after < _length; ++after)
		data[after + 1] = _data[after];

	delete[] _data;
	_data = data;
	++_length;
}

void IntegerArray::remove(int index)
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

	int* data = new int[_length - 1];

	for (int before = 0; before < index; ++before)
		data[before] = _data[before];

	for (int after = index + 1; after < _length; ++after)
		data[after - 1] = _data[after];

	delete[] _data;
	_data = data;
	--_length;
}

void IntegerArray::insertAtBeginning(int value)
{
	insert(value, 0);
};

void IntegerArray::insertAtEnd(int value)
{
	insert(value, _length);
};
