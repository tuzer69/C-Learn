#include <iostream>
#include "Refrigerator.h"

Refrigerator::Refrigerator(const char* name)
{
	this->name = name;
	this->type = "Refrigerators";
};

void Refrigerator::ShowInfo()
{
	std::cout << "���: " << type << std::endl;
	std::cout << "���: " << name << std::endl;
};