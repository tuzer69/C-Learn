#pragma once
#include "Snack.h"

class Slot

{
private:

	short snack_count;

	Snack* snacks;

	short snack_capacity;

public:

	bool isEmpty();

	short getSnackCout();

	short getEmptySlots();

	bool addSnack(Snack* snack);

	Slot();

	Slot(short snackCount);

};

