#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>

using namespace std;
int n;
bool q = false;
void push(list<double>&, int);
void print(list<double>&);
void modify(list<double>);
void zadanie1(list<double>& l, double k);
void del(list<double>&);
void zadanie3(list<double>&);

void push(list<double>& l, int n)
{
	for (int i = 0; i < n; i++)
	{
		double a = rand() % 50-25;
		l.push_back(a*1.11);
	}

}

void print(list<double>& l)
{
	cout << "list: ";
	for (list<double>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it;
		cout << ' ';
	}
}

void zadanie1(list<double>& l, double k)
{
	for (list<double>::iterator it = l.begin(); it != l.end(); it++)
	{
		if ((*it == k)&&(q == false))
		{

			cout << "Введите позицию нового элемента: ";
			int k;
			cin >> k;
			if (k<0 || k>l.size())
			{
				cout << "Ошибка!";
			}
			else
			{
				list<double>::iterator h = l.begin();;
				while (k > 0)
				{
					h++;
					k--;
				}
				q = true;
				swap(*it, *h);
			}
		}
	}
	if (q == false)
	{
		cout << "Такого числа нет в контейнере\n";
	}


}

void del(list<double>& l)
{
	list<double>::iterator it = l.begin();
	list<double>::iterator w = it;
	for (list<double>::iterator it = l.begin(); it != l.end(); it++)
	{
		if (*w > * it)
		{
			w = it;
		}

	}
		l.erase(w);
}

void zadanie3(list<double>& l)
{
	list<double>::iterator it = l.begin();
	list<double>::iterator w = it;
	for (list<double>::iterator it = l.begin(); it != l.end(); it++)
	{
		if (*w > * it)
		{
			w = it;
		}
	}
	double min = *w;
	for (list<double>::iterator it = l.begin(); it != l.end(); it++)
	{
		*it = (*it) * min;
	}
}