#pragma once
#include <iostream>
#include "MainForm.h"

using namespace std;

ref class Healthy
{
public:
	Healthy();
	Healthy(bool immunity);
	~Healthy();
	float GetChance();
	bool GetImmunity();
	void SetChance(int Chance);
private:
	float chance;
	bool immunity;
};

