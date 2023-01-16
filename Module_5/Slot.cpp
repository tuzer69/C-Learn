#pragma once
#include "Slot.h"


Slot::Slot()
{
	this->snack_count = 0;
	this->snack_capacity = 10;
	this->snacks = new Snack[10]();
}

Slot::Slot(short snackCount)
{
	this->snack_count = 0;
	this->snack_capacity = snackCount;
	this->snacks = new Snack[snackCount]();
}

bool Slot::isEmpty()
{
	return snack_count == 0;
}

bool Slot::addSnack(Snack* snack)
{
	if (getSnackCout() < snack_capacity)
	{
		this->snacks[snack_count++] = *snack;
		return true;
	}

	return false;
}


short Slot::getSnackCout()
{
	return this->snack_count;
}

short Slot::getEmptySlots()
{
	return this->getEmptySlots() - this->getSnackCout();
}