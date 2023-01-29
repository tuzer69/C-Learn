#pragma once

class Electronics
{
public:
	virtual void ShowInfo() = 0;
	virtual ~Electronics();
	const char* name;
	const char* type;
};

inline Electronics::~Electronics(){
	
}
