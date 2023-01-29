#pragma once
#include "ConsumerElectronics.h"
class Teapot : public ConsumerElectronics
{
public:
	Teapot(const char* name);
	void ShowInfo() override;
};

