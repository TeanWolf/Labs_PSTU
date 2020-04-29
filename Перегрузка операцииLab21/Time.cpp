#include"Time.h"
#include<iostream>
using namespace std;
Time& Time::operator=(const Time& t)
{
	if (&t == this)
		return *this;
	min = t.min;
	sec = t.sec;
	return *this;
}
Time Time::operator++(int)
{
	int tmp = min * 60 + sec;
	tmp++;
	Time t(min, sec);
	min = tmp / 60;
	sec = tmp % 60;
	return t;
}
Time Time::operator-(const Time& t)
{
	int tmp1 = min * 60 + sec;
	int tmp2 = t.min * 60 + t.sec;
	Time p;
	if (tmp2 > tmp1)
	{
		p.sec = (tmp2 - tmp1)%60;
	}
	else
	{
		p.sec = (tmp1 - tmp2)%60;
	}
	return p;
}
istream& operator>>(istream& in, Time& t)
{
	setlocale(LC_ALL, "RUS");
	cout << "Минуты:";
	in >> t.min;
	cout << "Секунды:";
	in >> t.sec;
	return in;
}
ostream& operator<<(ostream& out, const Time& t)
{
	return (out << t.min << " : " << t.sec);
}