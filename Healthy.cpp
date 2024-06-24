#include "Healthy.h"

Healthy::Healthy() {
	this->immunity = false;
}
Healthy::~Healthy() {

}
Healthy::Healthy(bool immunity) {
	this->immunity = immunity;
}
float Healthy::GetChance() 
{
	return this->chance;
}
bool Healthy::GetImmunity()
{
	return this->immunity;
}
void Healthy::SetChance(int Chance) {
	this->chance = Chance;
}