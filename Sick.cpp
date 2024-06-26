#include "Sick.h"

Sick::Sick() {
}
Sick::~Sick() {
}
int Sick::GetPeriod()
{
	return Period;
}
void Sick::SetPeriod(int Period)
{
	this->Period = Period;
}
