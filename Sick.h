#pragma once
class Sick
{
public:
	Sick();
	~Sick();
	int GetPeriod();
	void SetPeriod(int Period);
	int GetChanceOfDead();
	void SetChanceOfDead(int Chance);
private:
	int Period;
	int ChanceOfDead;
};

