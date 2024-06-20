#include "Healthy.h"

Healthy::Healthy(float chance) {
	this->chance = 0.25;
}
float Healthy::GetChance() 
{
	return this->chance;
}
void Healthy::SetChance(int Chance) {
	this->chance = Chance;
}