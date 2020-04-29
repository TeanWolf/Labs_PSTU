#pragma once
#include "Pair.h"
class Rightangled :
	public Pair
{
public:
	Rightangled(void);
public:
	~Rightangled(void);
	void Show();
	Rightangled(int, int, int, int);
	Rightangled(const Rightangled&);
	int Get_hypotenuse() { return hypotenuse; }
	void Set_hypotenuse(int);
	Rightangled& operator=(const Rightangled&);
	friend istream& operator>>(istream& in, Rightangled& r);
	friend ostream& operator<<(ostream& out, const Rightangled& r);
protected:
	int hypotenuse;
};


