#include <iostream>
#include "Teapot.h"


Teapot::Teapot(const char* name)
{
	this->name = name;
	type = "Automatic Teapot";
};

void Teapot::ShowInfo()
{
	std::cout << "Òèï: " << type << std::endl;
	std::cout << "Èìÿ: " << name << std::endl;
};

