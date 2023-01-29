#pragma once
#include "PortableElectronics.h"
class EBookReader : public PortableElectronics
{
public:
	EBookReader(const char* name);
	void ShowInfo() override;
};