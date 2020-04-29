#include"Object.h"
#include "Pair.h"
#include"Rightangled.h"
#include"Vector.h"
#include<string>
#include <iostream>
using namespace std;
int main()
{
	Vector v(5);
	Pair a;
	cin >> a;
	cout << a << endl;
	Object* p = &a;
	v.Add(p);
	p->Show();
	Rightangled b;
	cin >> b;
	cout << b << endl;
	p = &b;
	v.Add(p);
	cout << v;
	p->Show();
}