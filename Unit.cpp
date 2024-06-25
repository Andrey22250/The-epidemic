#include "Unit.h"

Unit::Unit()
{
	this->health.SetChance(0.25);
}
Unit::~Unit() 
{
}
Stat Unit::GetStatus() {
	return status;
}
Healthy Unit::GetHealth() {
	return health;
}