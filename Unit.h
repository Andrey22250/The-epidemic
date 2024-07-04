#pragma once
//Подключение вложенных классов и библиотек
#include "Status.h"
#include "Healthy.h"
#include "Infected.h"
#include "Sick.h"
#include "Dead.h"

using namespace std;

class Unit
{
public:
	Stat GetStatus();				//Для каждой переменной - Set и Get
	void SetStatus(Stat status);

	void SetHealthy(int Chance);
	int GetHealthy();
	
	void SetMaxPerInf(int Period);
	int GetMaxPerInf();
	void SetPerInf(int Period);
	int GetPerInf();
	
	void SetPerSick(int Period);
	int GetPerSick();
	void SetMaxPerSick(int Period);
	int GetMaxPerSick();
	
	void SetChanceofDeath(float Chance);
	float GetChanceofDeath();
	
	Unit();
	~Unit();
private:
	Stat status;		//Статус заболевания
	Healthy health;		//Параметр, отвечающий за здоворого человека
	Infected infected;	//Параметр, отвечающий за инфицированного человека
	Sick sick;			//Параметр, отвечающий за больного человека
	Dead dead;			//Параметр, управляющий смертью
};