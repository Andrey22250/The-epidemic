#pragma once
class Sick
{
public:
	Sick();
	~Sick();
	int GetPeriod();
	void SetPeriod(int Period);
	int GetMaxPerSick();
	void SetMaxPerSick(int Period);
private:
	int Period;
	int Maxper;
};

