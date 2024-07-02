#include "Unit.h"

Unit::Unit()		//Конструктор и деструктор
{
	this->status = healthy;
	this->infected.SetPeriod(0);
	this->sick.SetPeriod(0);
}
Unit::~Unit() 
{
}
Stat Unit::GetStatus() {		//Сеты и геты для всех переменных
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

void Unit::SetMaxPerSick(int Period) {
	this->sick.SetMaxPerSick(Period);
}

int Unit::GetMaxPerSick() {
	return this->sick.GetMaxPerSick();
}

void Unit::SetPerSick(int Period) {
	this->sick.SetPeriod(Period);
}

int Unit::GetPerSick() {
	return this->sick.GetPeriod();
}

void Unit::SetChanceofDeath(float Chance)
{
	this->dead.SetChanceOfDeath(Chance);
}

float Unit::GetChanceofDeath()
{
	return this->dead.GetChanceOfDeath();
}