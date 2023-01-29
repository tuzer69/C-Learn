#include <iostream>
#include "EBookReader.h"

EBookReader::EBookReader(const char* name)
{
	this->name = name;
	this->type = "E-Book Reader";
};

void EBookReader::ShowInfo()
{
	std::cout << "���: " << type << std::endl;
	std::cout << "���: " << name << std::endl;
};


