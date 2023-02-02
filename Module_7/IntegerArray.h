#pragma once
class IntegerArray
{
private:

	int _length{};
	int* _data{};

public:

		IntegerArray() = default;

		IntegerArray(int length);

		IntegerArray(const IntegerArray& a);

		IntegerArray& operator=(const IntegerArray& a);

		void erase();

		int& operator[](int index);

		int getLength() const;

		void reallocate(int newLength);

		void resize(int newLength);

		void insert(int value, int index);

		void remove(int index);

		void insertAtBeginning(int value);

		void insertAtEnd(int value);

		~IntegerArray();
};

