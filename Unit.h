#pragma once
#include <iostream>
#include "Status.h"
#include "Healthy.h"
#include "Infected.h"
#include "Sick.h"
#include "Dead.h"

using namespace std;

ref class Unit
{
public:
	Stat GetStatus();
	void SetHealthy(int Chance);
	int GetHealthy();
	Unit();
	~Unit();
private:
	Stat status;
	Healthy health;
	Infected infected;
	Sick sick;
	Dead dead;
};