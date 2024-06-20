#pragma once
#include <iostream>
#include "Status.h"
#include "Healthy.h"

using namespace std;

ref class Unit
{
public:
	Stat GetStatus();
private:
	Stat status;
	Healthy healthy;
};

