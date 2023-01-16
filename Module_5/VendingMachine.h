#pragma once
#include <iostream>
#include "Slot.h"

class VendingMachine
{

private:
	Slot* slots;
	short slots_count;
	short empty_slots;

public:

	VendingMachine(short slotCount);

	short getEmptySlotsCount();

	bool addSlot(Slot* slot);
};

