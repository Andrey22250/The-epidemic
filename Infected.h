#pragma once
class Infected
{
public:
	Infected();
	~Infected();
	int GetPeriod();
	void SetPeriod(int Period);
	int GetMaxPeriod();
	void SetMaxPeriod(int Period);
private:
	int Period;
	int Maxper;
};

