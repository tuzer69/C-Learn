#include <iostream>

#include "IntegerArray.h"

int main()
{
	try
	{
		IntegerArray a(50);

		for (int i = 0; i < 50; ++i)
			a[i] = i + 1;

		a.resize(33);

		std::cout << a.getLength() << std::endl;

		a.insert(999, 5);

		std::cout << a[5] << std::endl;

		a.insertAtBeginning(2222);
		a.insertAtEnd(5555);

		std::cout << a[0] << std::endl;

		std::cout << a[a.getLength() - 1] << std::endl;
	}

	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	catch (...)
	{
		std::cout << "Unknown error" << std::endl;
	}
	


	return 0;
}
