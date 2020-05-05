#include "Vector.h"
#include <iostream>
#include "Time.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	Vector<int>A(5, 0);
	cout << "Вектор A:";
	cin >> A;
	cout << A << endl;
	Vector <int>B(10, 0);
	cout << "Вектор B, заполненный нулями:";
	cout << B << endl;
	B = A;
	cout<<"B=A:"<< B << endl;
	B = A + 10;
	cout << "Операция сложения с константой(+20):" << B;
	cout << "\nДоступ по индексу:";
	int index;
	cin >> index;
	cout << "Элемент:" << B[index];
	Time t;
	cin >> t;
	cout << "Вектор класса Time:" << t << '\n';
	cout << "Сложение векторов a[i]+b[i]\n";
	A + B;
	cout << endl;
	Vector<Time>a(5, t);
	cout << "Вектор A через тип данных Time:";
	cin >> a;
	cout << a << endl;
	Vector <Time>b(10, t);
	cout<<"Вектор B через тип данных Time:" << b << endl;
	b = a;
	cout<<"B=A:" << B << endl;
	cout << "Сложение векторов a[i]+b[i]\n";
	a + b;
}