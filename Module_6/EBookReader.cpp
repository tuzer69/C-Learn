#include <iostream>
#include "EBookReader.h"

EBookReader::EBookReader(const char* name)
{
	this->name = name;
	this->type = "E-Book Reader";
};

void EBookReader::ShowInfo()
{
	std::cout << "Òèï: " << type << std::endl;
	std::cout << "Èìÿ: " << name << std::endl;
};


