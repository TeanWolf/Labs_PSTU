#include "Vector.h"
#include <iostream>
#include "Time.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	Vector<int>A(5, 0);
	cout << "������ A:";
	cin >> A;
	cout << A << endl;
	Vector <int>B(10, 0);
	cout << "������ B, ����������� ������:";
	cout << B << endl;
	B = A;
	cout<<"B=A:"<< B << endl;
	B = A + 10;
	cout << "�������� �������� � ����������(+20):" << B;
	cout << "\n������ �� �������:";
	int index;
	cin >> index;
	cout << "�������:" << B[index];
	Time t;
	cin >> t;
	cout << "������ ������ Time:" << t << '\n';
	cout << "�������� �������� a[i]+b[i]\n";
	A + B;
	cout << endl;
	Vector<Time>a(5, t);
	cout << "������ A ����� ��� ������ Time:";
	cin >> a;
	cout << a << endl;
	Vector <Time>b(10, t);
	cout<<"������ B ����� ��� ������ Time:" << b << endl;
	b = a;
	cout<<"B=A:" << B << endl;
	cout << "�������� �������� a[i]+b[i]\n";
	a + b;
}