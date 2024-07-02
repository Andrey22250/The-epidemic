#include "Infected.h"

Infected::Infected() {		//Стандартные сеты и геты параметров

}
Infected::~Infected() {

}
int Infected::GetPeriod()
{
	return Period;
}
void Infected::SetPeriod(int Period)
{
	this->Period = Period;
}
int Infected::GetMaxPeriod()
{
	return Maxper;
}
void Infected::SetMaxPeriod(int Period)
{
	this->Maxper = Period;
}