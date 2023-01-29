#pragma once
#include "ConsumerElectronics.h"
#include "PortableElectronics.h"

class RombClass : public ConsumerElectronics, public PortableElectronics
{
public:
	RombClass(const char* name);
	void ShowInfo() override;
};

