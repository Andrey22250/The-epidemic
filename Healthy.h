#pragma once
#include <iostream>
#include "MainForm.h"

using namespace std;

ref class Healthy
{
public:
	Healthy(float chance);
	~Healthy();
	float GetChance();
	void SetChance(int Chance);
private:
	float chance;
};

