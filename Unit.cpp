#include "Unit.h"

Unit::Unit()
{
	this->status = healthy;
	this->health.SetChance(25);
	this->infected.SetPeriod(0);
	this->infected.SetMaxPeriod(7);
	this->sick.SetPeriod(0);
	this->dead.SetChanceOfDeath(15);
}
Unit::~Unit() 
{
}
Stat Unit::GetStatus() {
	return status;
}
void Unit::SetStatus(Stat status) {
	this->status = status;
}

void Unit::SetHealthy(int Chance) {
	this->health.SetChance(Chance);
}

int Unit::GetHealthy() {
	return this->health.GetChance();
}

void Unit::SetMaxPerInf(int Period) {
	this->infected.SetMaxPeriod(Period);
}

int Unit::GetMaxPerInf() {
	return this->infected.GetMaxPeriod();
}

void Unit::SetPerInf(int Period) {
	this->infected.SetPeriod(Period);
}

int Unit::GetPerInf() {
	return this->infected.GetPeriod();
}