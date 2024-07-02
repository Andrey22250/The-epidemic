#include "Sick.h"

Sick::Sick() {  //Стандартые сеты и геты параметров
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
int Sick::GetMaxPerSick()
{
	return Maxper;
}
void Sick::SetMaxPerSick(int Period)
{
	this->Maxper = Period;
}