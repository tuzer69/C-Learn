#include <iostream>
#include "RombClass.h"

RombClass::RombClass(const char* name)
{
	this->name = name;
	this->type = "MY Custom romb class";
};

void RombClass::ShowInfo()
{
	std::cout << "���: " << type << std::endl;
	std::cout << "���: " << name << std::endl;
};

