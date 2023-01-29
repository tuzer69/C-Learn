#pragma once
#include "ConsumerElectronics.h"
class Refrigerator : public ConsumerElectronics
{
public:
	Refrigerator(const char* name);
	void ShowInfo() override;
};

