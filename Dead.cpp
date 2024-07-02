#include "Dead.h"

Dead::Dead() {

}
Dead::~Dead() {

}
float Dead::GetChanceOfDeath()
{
	return ChanceOfDeath;
}
void Dead::SetChanceOfDeath(float Chance)
{
	this->ChanceOfDeath = Chance;
}