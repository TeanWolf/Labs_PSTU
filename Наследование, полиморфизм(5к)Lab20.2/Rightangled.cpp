#include "Rightangled.h"
Rightangled::Rightangled(void) :Pair()
{
	hypotenuse = 0;
}
Rightangled::~Rightangled(void)
{
}
Rightangled::Rightangled(int F, int S, int C, int G) :Pair(F, S, C)
{
	hypotenuse = G;
}
Rightangled::Rightangled(const Rightangled& R)
{
	first = R.first;
	second = R.second;
	composition = R.composition;
	hypotenuse = R.hypotenuse;
}
void Rightangled::Set_hypotenuse(int G)
{
	hypotenuse = G;
}
Rightangled& Rightangled::operator=(const Rightangled& r)
{
	if (&r == this)return *this;
	first = r.first;
	second = r.second;
	composition = r.composition;
	return *this;
}
istream& operator>>(istream& in, Rightangled& r)
{
	cout << "\nFirst:";
	in >> r.first;
	cout << "\nSecond:";
	in >> r.second;
	return in;
}
ostream& operator<<(ostream& out, const Rightangled& r)
{
	out << "\nFirst:" << r.first;
	out << "\nSecond:" << r.second;
	out << "\nComposition:" << r.first * r.second;
	out << "\nHypotenuse:" << sqrt(pow(r.first, 2) + pow(r.second, 2)); ;
	out << "\n";
	return out;
}
void Rightangled::Show()
{
	cout << "\nFirst:" << first;
	cout << "\nSecond:" << second;
	cout << "\nComposition:" <<first * second;
	cout << "\nHypotenuse:" << sqrt(pow(first, 2) + pow(second, 2)); ;
	cout << "\n";
}
