#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Time
{
public:
	Time();
	Time(int, int);
	Time(const Time&);
	Time operator =(const Time&);
	Time& operator++();
	Time& operator--();
	Time operator/(int k);
	Time operator+(int k);
	Time operator++(int);
	friend ostream& operator <<(ostream& out, const Time& p);
	friend istream& operator>>(istream& in, Time& p);
	friend fstream& operator>>(fstream& fin, Time& p);
	friend fstream& operator <<(fstream& fout, const Time& p);
	friend bool operator ==(const Time p, const Time& c)
	{
		if ((p.min * 60 + p.sec) == (c.min * 60 + c.sec)) return true;
		else return false;
	}
public:
	~Time();
private:
	int min;
	int sec;
};