#include <iostream>
#include "RombClass.h"

RombClass::RombClass(const char* name)
{
	this->name = name;
	this->type = "MY Custom romb class";
};

void RombClass::ShowInfo()
{
	std::cout << "Òèï: " << type << std::endl;
	std::cout << "Èìÿ: " << name << std::endl;
};

