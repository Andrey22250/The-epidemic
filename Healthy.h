#pragma once
#include <iostream>

class Healthy
{
public:
	Healthy();
	~Healthy();
	float GetChance();
	void SetChance(int Chance);
private:
	float chance = 0;
};

