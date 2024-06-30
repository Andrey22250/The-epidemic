#include "Healthy.h"

Healthy::Healthy() {
}
Healthy::~Healthy() {

}
float Healthy::GetChance() 
{
	return this->chance;
}
void Healthy::SetChance(int Chance) {
	this->chance = Chance;
}