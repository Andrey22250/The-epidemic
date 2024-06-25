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
	Healthy GetHealth();
	Unit();
	~Unit();
private:
	Stat status = healthy;
	Healthy health;
	Infected infected;
	Sick sick;
	Dead dead;
};