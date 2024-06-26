#pragma once
ref class Dead
{
public:
	Dead();
	~Dead();
	int GetChanceOfDeath();
	void SetChanceOfDeath(int Chance);
private:
	int ChanceOfDeath;
};

