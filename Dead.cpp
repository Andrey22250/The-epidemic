#include "Dead.h"

Dead::Dead() {

}
Dead::~Dead() {

}
int Dead::GetChanceOfDeath()
{
	return ChanceOfDeath;
}
void Dead::SetChanceOfDeath(int Chance)
{
	this->ChanceOfDeath = Chance;
}