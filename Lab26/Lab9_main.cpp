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
		cout << "Введите номер элемента:";
		cin >> index;
		cout << "Элемент:" << x[index];
	}
	catch (int)
	{
		cout << "Ошибка!" << endl;
	}
	return 0;
}