#include "Time.h"
Time::Time()
{
	min =0; sec = 0;
}
Time::Time(int M, int S)
{
	min = M; sec = S;
}
Time::Time(const Time& p)
{
	min= p.min; sec = p.sec;
}
Time Time::operator =(const Time& p)
{
	if (&p == this) return *this;
	min = p.min; sec = p.sec;
	return*this;
}
Time& Time::operator++()
{
	this->min++;
	return *this;
}
Time Time::operator++(int)
{
	Time temp(*this);
	this->sec++;
	return temp;
}
Time& Time::operator--()
{
	int temp = min * 60 - sec;
	temp++;
	min = temp / 60;
	sec = temp % 60;
	return*this;
}
Time Time::operator+(int k)
{
	Time tmp;
	int q = (min * 60 + sec) + k;
	tmp.min = q / 60;
	tmp.sec = q % 60;
	return tmp;
}
Time::~Time()
{
}
ostream& operator<<(ostream& out, const Time& p)
{
	return (out<<p.min<<":"<<p.sec);
}
istream& operator>>(istream& in, Time& p)
{
	cout << "Минуты:"; in >> p.min;
	cout << "Секунды:"; in >> p.sec;
	return in;
}
fstream& operator>>(fstream& fin, Time& p)
{
	fin >> p.min;
	fin >> p.sec;
	return fin;
}
fstream& operator<<(fstream& fout, const Time& p)
{
	fout << p.min << "\n" << p.sec << "\n";
	return fout;
}
