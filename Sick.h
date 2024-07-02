#pragma once
class Sick
{
public:
	Sick();					//Стандартные сеты и геты для класса
	~Sick();
	int GetPeriod();
	void SetPeriod(int Period);
	int GetMaxPerSick();
	void SetMaxPerSick(int Period);
private:
	int Period;		//Текущее время болезни
	int Maxper;		//Максимальное время болезни
};

