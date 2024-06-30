#pragma once
#include <iostream>
#include "Status.h"
#include "Healthy.h"
#include "Infected.h"
#include "Sick.h"
#include "Dead.h"

using namespace std;

class Unit
{
public:
	Stat GetStatus();
	void SetStatus(Stat status);
	void SetHealthy(int Chance);
	int GetHealthy();
	void SetMaxPerInf(int Period);
	int GetMaxPerInf();
	void SetPerInf(int Period);
	int GetPerInf();
	Unit();
	~Unit();
private:
	Stat status;
	Healthy health;
	Infected infected;
	Sick sick;
	Dead dead;
};