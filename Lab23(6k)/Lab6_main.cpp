#include <iostream>
#include "Vector.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "������� ��������� A �� 5 ���������:\n";
	Vector a(5);
	cout << a << "\n";
	cin >> a;
	cout << "������� � �������� 2 ����� 100:\n";
	a[2] = 100;
	cout << a << "\n";
	cout << "������� ��������� B �� 10 ���������:\n";
	Vector b(10);
	cout << b << "\n";
	cout << "B=A:\n";
	b = a;
	cout << b << "\n";
	cout << "������� ��������� C �� 10 ���������:\n";
	Vector c(10); 
	cout << "��������� C ����� ����� ���������� B � ��������� 100:\n";
	c = b + 100;
	cout << c << "\n";
	cout << "������ �� ������� � ������ b\n������� ������ :";
	int index;
	cin >> index;
	cout << "������� � " << index << " ��������:";
	cout << b[index] << endl;
	cout << "������ ��������� �� ������ ������� � � ������� ���:" << endl;
	cout << *(a.first()) << endl;
	iteratorF i = a.first();
	++i;
	cout << "����� �������� ��������� � � ������� ���������:" << endl;
	for (i = a.first(); i != a.last(); ++i)
	{
		cout << *i << " ";
	}
	cout<<endl << "�������� ��������� ������� a[i] + b[i]\n";
	a + b;
	cout << endl;
}