#include "VendingMachine.h"

VendingMachine::VendingMachine(short slotCount)
{
	this->slots = new Slot[slotCount]();
	this->slots_count = slotCount;
	this->empty_slots = slotCount;
}

short VendingMachine::getEmptySlotsCount()
{
	return this->empty_slots;
}

bool VendingMachine::addSlot(Slot* slot)
{
	if (this->empty_slots > 0)
	{
		slots[empty_slots--] = *slot;
		return true;
	}

	return false;
}