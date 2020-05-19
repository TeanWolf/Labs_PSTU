#include <iostream>
#include "Vector.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Создаем контейнер A из 5 элементов:\n";
	Vector a(5);
	cout << a << "\n";
	cin >> a;
	cout << "Элемент с индексом 2 равен 100:\n";
	a[2] = 100;
	cout << a << "\n";
	cout << "Создаем контейнер B из 10 элементов:\n";
	Vector b(10);
	cout << b << "\n";
	cout << "B=A:\n";
	b = a;
	cout << b << "\n";
	cout << "Создаем контейнер C из 10 элементов:\n";
	Vector c(10); 
	cout << "Контейнер C равен сумме контейнера B и константы 100:\n";
	c = b + 100;
	cout << c << "\n";
	cout << "Доступ по индексу в списке b\nВведите индекс :";
	int index;
	cin >> index;
	cout << "Элемент с " << index << " индексом:";
	cout << b[index] << endl;
	cout << "Ставим указатель на первый элемент а и выводим его:" << endl;
	cout << *(a.first()) << endl;
	iteratorF i = a.first();
	++i;
	cout << "Вывод значений элементов а с помощью указателя:" << endl;
	for (i = a.first(); i != a.last(); ++i)
	{
		cout << *i << " ";
	}
	cout<<endl << "Сложение элементов списков a[i] + b[i]\n";
	a + b;
	cout << endl;
}