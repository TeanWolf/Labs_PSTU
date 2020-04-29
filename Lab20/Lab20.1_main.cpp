#include<iostream>
#include "Pair.h"
#include "Rightangled.h"
using namespace std;
void f1(Pair& c)
{
	c.Set_first(4);
	cout << c;
}
Pair f2()
{
	Rightangled r(4,5, 3, 10);
	return r;
}
int main()
{
	Pair a;
	cin >> a;
	cout << a;
	Pair b(4, 2,8);
	cout << b;
	a = b;
	cout << a;
	Rightangled c;
	cin >> c;
	cout << c;
	f1(c);
	a = f2();
	cout << a;
}
