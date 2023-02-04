#pragma once
#include <exception>

template <typename T>
class Array
{
private:

	int _length;
	T* _data;

public:

	Array();

	Array(int size);

	Array(const Array& a);

	T& operator[](int index);

	Array& operator=(const Array& a);

	void reallocate(int newLength);

	int getLength() const;

	void erase();

	void resize(int newLength);

	void remove(int index);

	void insert(int value, int index);

	void insertAtBeginning(int value);

	void insertAtEnd(int value);
		
	~Array() { delete[] _data; };


};

