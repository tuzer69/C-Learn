#pragma once
#include "PortableElectronics.h"
class Camera : public PortableElectronics
{
public:
	Camera(const char* name);
	void ShowInfo() override;
};

