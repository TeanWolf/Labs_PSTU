#include "Vector.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	try
	{
		Vector x(2);
		Vector y;
		++x;
		cout <<"X:"<< x;
		int index;
		cout << "������� ����� ��������:";
		cin >> index;
		cout << "�������:" << x[index];
	}
	catch (int)
	{
		cout << "������!" << endl;
	}
	return 0;
}