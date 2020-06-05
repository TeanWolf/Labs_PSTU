#include <iostream>
#include "Time.h"
#include <vector>
#include <cstdlib>

bool j = false;
using namespace std;


Time& Time::operator=(const Time& t)
{
	if (&t == this)return *this;
	min = t.min;
	sec = t.sec;
	return *this;
}

istream& operator>>(istream& in, Time& t)
{
	cout << "min?"; cin >> t.min;
	cout << "sec?"; cin >> t.sec;
	return in;
}

ostream& operator<<(ostream& out, const Time& t)
{
	return (out << t.min << " : " << t.sec);
}

bool Time::operator<(const Time& t)
{
	if (min < t.min)return true;
	if (min == t.min && sec < t.sec)return true;
	return false;
}

bool Time::operator>(const Time& t)
{
	if (min > t.min)return true;
	if (min == t.min && sec > t.sec)return true;
	return false;
}
Time operator*(const Time& t, const Time& r)
{
	int temp1 = t.min * 60 + t.sec;
	int temp2 = r.min * 60 + r.sec;
	Time p;
	p.min = (temp1 * temp2) / 60;
	p.sec = (temp1 * temp2) % 60;
	return p;
}



Time Time::operator+(const Time& t)
{
	int temp1 = min * 60 + sec;
	int temp2 = t.min * 60 + t.sec;
	Time p;
	p.min = (temp1 + temp2) / 60;
	p.sec = (temp1 + temp2) % 60;
	return p;
}

Time Time::operator/(const Time& t)
{
	int temp1 = min * 60 + sec;
	int temp2 = t.min * 60 + t.sec;
	Time p;
	p.min = (temp1 / temp2) / 60;
	p.sec = (temp1 / temp2) % 60;
	return p;
}

Time Time::operator/(const int& t)
{
	int temp1 = min * 60 + sec;

	Time p;
	p.min = (temp1 / t) / 60;
	p.sec = (temp1 / t) % 60;
	return p;
}

typedef vector<Time>Vec;

Vec make_vector(int n)
{
	Vec v;
	for (int i = 0; i < n; i++)
	{
		Time a;
		cin >> a;
		v.push_back(a);
	}
	return v;
}

void print_vector(Vec v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}

bool operator ==(const Time& a, const Time& b)
{
	int k = a.min * 60 + a.sec;
	int e = b.min * 60 + b.sec;
	if (k == e)
		return true;
	else
		return false;
}

int search(Vec v, Time t)
{
	int n;
	for (int i = 0; i < v.size(); i++)
	{
		if (t == v[i])
		{
			n = i;
			j = true;
		}

	}
	return n;
}
void add_vector(Vec& v, int s, int pos)
{
	swap(v[s], v[pos]);
}
int min_elem(Vec v)
{
	int m = 0;
	Time k = v[0];
	for (int i = 0; i < v.size(); i++)
	{
		if (k > v[i])
		{
			k = v[i];
			m = i;
		}

	}
	return m;
}
void umnozh(Vec& v, int m)
{
	Time t = v[m];
	for (int i = 0; i < v.size(); i++)
	{
		v[i] = v[i] * t;
	}

}



int main()
{
	int sw;
	setlocale(LC_ALL, "rus");
	try
	{
		vector<Time> v;
		vector<Time>::iterator vi = v.begin();
		int n;
		cout << "Задание 1\n";
		cout << "Введите количество элементов:";
		cin >> n;
		v = make_vector(n);
		print_vector(v);
		Time t;
		cin >> t;
		sw = search(v, t);
		if (j)
		{
			cout << "\nВведите позицию нового элемента: ";
			int pos;
			cin >> pos;
			if (pos > v.size())throw 1;
			add_vector(v, sw, pos);
			print_vector(v);
			cout << "\nЗадание 2\n\n";
			int MIN = min_elem(v);
			v.erase(v.begin() + MIN);
			print_vector(v);
			cout << "\nЗадание 3\n\n";
			MIN = min_elem(v);
			umnozh(v, MIN);
			print_vector(v);
		}
		else
		{
			cout << "\nДанного объекта в векторе нет\n";
		}

	}
	catch (int)
	{
		cout << "ошибка!";
	}

}