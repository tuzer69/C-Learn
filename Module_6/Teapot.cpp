#include <iostream>
#include "Teapot.h"


Teapot::Teapot(const char* name)
{
	this->name = name;
	type = "Automatic Teapot";
};

void Teapot::ShowInfo()
{
	std::cout << "���: " << type << std::endl;
	std::cout << "���: " << name << std::endl;
};

