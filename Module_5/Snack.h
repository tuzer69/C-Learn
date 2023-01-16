#pragma once
class Snack
{
private:

	const char* name;
	const char* calories;


public:

	Snack();

	Snack(const char* name);

	Snack(const char* name, const char* calories);

	void getName();

	void getCalories();
	
};

