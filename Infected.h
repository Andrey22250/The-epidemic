#pragma once
class Infected
{
public:
	Infected();
	~Infected();
	int GetPeriod();		//Стандартное определение сетов и гетов
	void SetPeriod(int Period);
	int GetMaxPeriod();
	void SetMaxPeriod(int Period);
private:
	int Period;				//Текущее время инкубации
	int Maxper;				//Максимальное время инкубации
};

