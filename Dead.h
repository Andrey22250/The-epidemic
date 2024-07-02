#pragma once
class Dead
{
public:
	Dead();
	~Dead();
	float GetChanceOfDeath();
	void SetChanceOfDeath(float Chance);
private:
	float ChanceOfDeath;		//Шанс умереть при болезни - определяется ползунком, делённым на кол-во дней
};

