#pragma once

class Healthy
{
public:
	Healthy();
	~Healthy();
	float GetChance();
	void SetChance(int Chance);
private:
	float chance = 0;		//Шанс заражения болезнью от инфицированного
};

