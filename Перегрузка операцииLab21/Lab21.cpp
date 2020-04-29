#include "Time.h"
#include <iostream>
using namespace std;
int main()
{
	Time a;
	Time b;
	Time c;
	cin >> a;
	cin >> b;
	cout << a << endl;
	a++;
	b++;
	c = b-a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}