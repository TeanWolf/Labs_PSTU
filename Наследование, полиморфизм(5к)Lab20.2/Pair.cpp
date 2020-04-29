#include "Pair.h"
Pair::Pair(void)
{
	first = 0;
	second = 0;
	composition = 0;
}
Pair::~Pair(void)
{

}
Pair::Pair(int F, int S, int C)
{
	first = F;
	second = S;
	composition = C;
}
Pair::Pair(const Pair& pair)
{
	first = pair.first;
	second = pair.second;
	composition = pair.composition;
}
void Pair::Set_first(int F)
{
	first = F;
}
void Pair::Set_second(int S)
{
	second = S;
}
void Pair::Set_composition(int C)
{
	composition = C;
}

Pair& Pair::operator=(const Pair& p)
{
	if (&p == this)return *this;
	first = p.first;
	second = p.second;
	composition = p.composition;
	return *this;
}
istream& operator>>(istream& in, Pair& p)
{
	cout << "\nFirst:";in>> p.first;
	cout << "\nSecond:";in>> p.second;
	return in;
}
ostream& operator<<(ostream& out, const Pair& p)
{
	out << "\nFirst:" << p.first;
	out << "\nSecond:" << p.second;
	out << "\nComposition:" << p.first * p.second;
	out << "\n";
	return out;
}
void Pair::Show()
{
	cout << "\nFirst:" << first;
	cout << "\nSecond:" << second;
	cout << "\nComposition:" <<first *second;
	cout << "\n";
}
