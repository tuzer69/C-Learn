#include <iostream>
#include "Camera.h"
#include "EBookReader.h"
#include "Teapot.h"
#include "Refrigerator.h"
#include "RombClass.h"


int main()
{
	setlocale(LC_ALL, "Russian");

	Electronics* storage[5];

	storage[0] = new Camera("GoPro HERO11 Black");
	storage[1] = new EBookReader("Kindle Paperwhite (8 GB)");
	storage[2] = new Teapot("Mueller Ultra Kettle M99");
	storage[3] = new Refrigerator("Samsung RB37A5200SA/WT");
	storage[4] = new RombClass("My Custom Romb Class");

	bool open = true;

	while (open)
	{
		int choice;
		std::cout << "Выберите продукт:\n\t"
			"1 - Камера\n\t2 - Читалка\n\t3 - Чайник\n\t4 - Холодильник\n\t"
			"5 - Ромбовидный класс\n\tq - Выход" << std::endl;
		std::cin >> choice;

		if (choice >= 1 && choice <= 5)
		{
			storage[choice - 1]->ShowInfo();
			std::cout << std::endl;
		}
		else
		{
			open = false;
		}

	}


	delete storage[0];
	delete storage[1];
	delete storage[2];
	delete storage[3];
	delete storage[4];

	return 0;
}
