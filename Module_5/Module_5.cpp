#include <iostream>
#include "VendingMachine.h"
#include "Slot.h"
#include "Snack.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	Slot* slot = new Slot(10);
	VendingMachine* machine = new VendingMachine(10);

	slot->addSnack(bounty);
	slot->addSnack(snickers);

	machine->addSlot(slot);

	std::cout<< "Количество пустых слотов: " << machine->getEmptySlotsCount() << std::endl;

	delete slot;
	delete bounty;
	delete machine;
	delete snickers;
}
