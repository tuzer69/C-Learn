#include <iostream>
#include "Refrigerator.h"

Refrigerator::Refrigerator(const char* name)
{
	this->name = name;
	this->type = "Refrigerators";
};

void Refrigerator::ShowInfo()
{
	std::cout << "Òèï: " << type << std::endl;
	std::cout << "Èìÿ: " << name << std::endl;
};