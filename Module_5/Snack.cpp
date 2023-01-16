#pragma once
#include "Snack.h"
#include <iostream>

Snack::Snack()
{
	calories = 0;
}

Snack::Snack(const char* name)
{
	calories = 0;
	this->name = name;
}

Snack::Snack(const char* name, const char* calories)
{
	calories = 0;
	this->name = name;
	this->calories = calories;
}

void Snack::getName()
{
	std::cout << Snack::name;
}

void Snack::getCalories()
{
	std::cout << Snack::calories;
}