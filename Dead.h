#pragma once
class Dead
{
public:
	Dead();
	~Dead();
	float GetChanceOfDeath();
	void SetChanceOfDeath(float Chance);
private:
	float ChanceOfDeath;
};

