#include "Time.h"
#include <iostream>
#include <fstream>
#include <string>
#include "file_work.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	Time x;
	cin >> x;
	cout << x;
	Time y;
	y = x;
	Time p,p1;
	Time tmp;
	int k, c;
	char file_name[30];
	do
	{
		cout << "\n1. Создать файл";
		cout << "\n2. Распечатать файл";
		cout << "\n3. Удаление значения";
		cout << "\n4. Добавить элементы";
		cout << "\n5. Увеличить значения";
		cout << "\n0. Выход\n";
		cin >> c;
		switch (c)
		{
		case 1: cout << "Введите имя файла:"; cin >> file_name;
			k = make_file(file_name);
			if (k < 0)cout << "Невозможно создать файл!";
			break;
		case 2: cout << "Введите имя файла:"; cin >> file_name;
			k = print_file(file_name);
			if (k == 0)cout << "Файл пустой!\n";
			if (k < 0)cout << "Невозможно прочитать файл!\n";
			break;
		case 3: cout << "Введите имя файла:"; cin >> file_name;
			cout << "Введите значение:"; cin >> tmp;
			k = del_file(file_name,tmp);
			if (k < 0)cout << "Невозможно прочитать файл!";
			if (k == 0) cout << "Файл пустой!\n";
			break;
		case 4:
		{
			cout << "Введите имя файла:";
			cin >> file_name;
			cout << "Введите значение:";
			cin >> tmp;
			cout << "Введите количество новых записей:";
			int col;
			cin >> col;
			k = add_file(file_name,col,p,tmp);
			if (k < 0) cout << "Невозможно прочитать файл\n";
			if (k == 0) k = add_file(file_name, col,p,tmp);
			cout << endl;
			break;
		}
		case 5: cout << "Введите имя файла:";
			cin >> file_name;
			cout << "Введите значение:";
			cin >> tmp;
			k = change_file(file_name,tmp);
			if (k < 0) cout << "\nНевозможно прочитать файл!";
			break;

		}
	} 
	while (c != 0);
}